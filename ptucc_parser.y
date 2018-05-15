%{
#include <stdarg.h>
#include <stdio.h>	
#include "cgen.h"

extern int yylex(void);
extern int line_num;
%}

%union
{
	char* crepr;
}
%token <crepr> IDENT
%token <crepr> POSINT 
%token <crepr> REAL 
%token <crepr> STRING

%token KW_PROGRAM
%token KW_BEGIN
%token KW_END
%token KW_AND
%token KW_DIV
%token KW_FUNCTION
%token KW_MOD
%token KW_PROCEDURE
%token KW_RESULT
%token KW_ARRAY
%token KW_DO
%token KW_GOTO
%token KW_NOT
%token KW_RETURN
%token KW_BOOLEAN
%token KW_ELSE
%token KW_IF
%token KW_OF
%token KW_REAL
%token KW_THEN
%token KW_CHAR
%token KW_FOR
%token KW_INTEGER
%token KW_OR
%token KW_REPEAT
%token KW_UNTIL
%token KW_VAR
%token KW_WHILE
%token KW_TO
%token KW_DOWNTO
%token KW_TYPE

%token LIB_RS
%token LIB_RI
%token LIB_RR

%token KW_TRUE
%token KW_FALSE

%token CAST_INTEGER
%token CAST_BOOLEAN
%token CAST_CHAR
%token CAST_REAL
%token OP_INEQUAL
%token OP_LESSEQ
%token OP_GREATEREQ
%token ASSIGN

%start program

%type <crepr> program_decl
%type <crepr> body
%type <crepr> statements
%type <crepr> statement_list
%type <crepr> statement
%type <crepr> proc_call
%type <crepr> arguments
%type <crepr> arglist
%type <crepr> expression
%type <crepr> instruction
%type <crepr> data_type
%type <crepr> basic_data_type
%type <crepr> array_of_type
%type <crepr> type_declaration
%type <crepr> type_decl_list
%type <crepr> type_decl
%type <crepr> var_declaration
%type <crepr> var_decl_list
%type <crepr> var_decl
%type <crepr> subroutine_decl_list
%type <crepr> subroutine
%type <crepr> subroutine_decl
%type <crepr> sub_arg_decl_list
%type <crepr> sub_arg_decl
%type <crepr> subproutine_body
%type <crepr> array_call
%type <crepr> array_size
%type <crepr> var_ident

%left KW_OR
%left KW_AND
%left '=' OP_INEQUAL '<' '>' OP_LESSEQ OP_GREATEREQ
%left '-' '+'
%left '*' '/' KW_DIV KW_MOD
%right CAST_INTEGER CAST_BOOLEAN CAST_CHAR CAST_REAL
%right UMINUS UPLUS
%right KW_NOT

%precedence KW_THEN
%precedence KW_ELSE


%%

program:  program_decl type_declaration var_declaration subroutine_decl_list body '.'  		
{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* Program %s */ \n\n", $1);
		printf("/* Type declaration: */\n%s\n", $2);
		printf("/* Variable declaration: */\n%s\n", $3);
		printf("/* Function declaration: */\n%s", $4);
		printf("/* Main: */\nint main() %s \n", $5);
	}
};


program_decl : KW_PROGRAM IDENT ';'  	{ $$ = $2; };

body : KW_BEGIN statements KW_END   	{ $$ = template("{\n%s}\n", $2); };

statements: 				        	{ $$ = ""; };
statements: statement_list		   		{ $$ = $1; };

statement_list: statement                     
			  | statement_list ';' statement  { $$ = template("%s%s", $1, $3); }; 


statement: proc_call  						{ $$ = template("%s;\n", $1); };
		 | instruction 						{ $$ = template("%s", $1); };

proc_call: IDENT '(' arguments ')' 			{ $$ = template("%s(%s)", $1, $3); };

arguments :									{ $$ = ""; }
	 	  | arglist 						{ $$ = $1; };

arglist: expression							{ $$ = $1; }
       | arglist ',' expression 			{ $$ = template("%s,%s", $1, $3);  };

expression: POSINT 							{ $$ = template("%s",$1); };
          | REAL							{ $$ = template("%s",$1); };
          | IDENT array_call				{ $$ = template("%s%s", $1, $2); };
		  | KW_RESULT						{ $$ = template("result"); };
          | KW_TRUE							{ $$ = template("1"); };
          | KW_FALSE						{ $$ = template("0"); };
          | STRING 							{ $$ = string_ptuc2c($1); };
		  | '(' expression ')'				{ $$ = template("(%s)", $2); };
		  | CAST_INTEGER expression			{ $$ = template("(int)%s", $2); };
		  | CAST_BOOLEAN expression			{ $$ = template("(int)%s", $2); };
		  | CAST_CHAR expression			{ $$ = template("(char)%s", $2); };
		  | CAST_REAL expression			{ $$ = template("(double)%s", $2); };
		  |	expression '+' expression		{ $$ = template("%s + %s", $1, $3); };
		  | expression '-' expression		{ $$ = template("%s - %s", $1, $3); };
		  | expression '*' expression		{ $$ = template("%s * %s", $1, $3); };
		  | expression '/' expression		{ $$ = template("%s / %s", $1, $3); };
		  | expression KW_DIV expression		{ $$ = template("%s / %s", $1, $3); };
		  | expression KW_MOD expression		{ $$ = template("%s %% %s", $1, $3); };
		  | KW_NOT expression            { $$ = template("!%s", $2); };
		  | '-' expression %prec UMINUS		{ $$ = template("-%s", $2); };
		  | '+' expression %prec UPLUS		{ $$ = template("%s", $2); };
		  | expression '=' expression			{ $$ = template("%s == %s", $1, $3); };
		  |	expression OP_INEQUAL expression		{ $$ = template("%s != %s", $1, $3); };
		  | expression '<' expression		{ $$ = template("%s < %s", $1, $3); };
		  | expression '>' expression		{ $$ = template("%s > %s", $1, $3); };
		  | expression OP_LESSEQ expression		{ $$ = template("%s <= %s", $1, $3); };
		  | expression OP_GREATEREQ expression		{ $$ = template("%s >= %s", $1, $3); };
		  | expression KW_AND expression		{ $$ = template("%s && %s", $1, $3); };
		  | expression KW_OR expression		{ $$ = template("%s || %s", $1, $3); };
		  | proc_call 						{ $$ = $1; };
		  
data_type: basic_data_type					{ $$ = $1; };
		 | array_of_type	 				{ $$ = $1; };
		 //functype
		  
basic_data_type: KW_INTEGER					{ $$ = template("int"); };
		 | KW_BOOLEAN						{ $$ = template("int"); };
		 | KW_CHAR							{ $$ = template("char"); };
		 | KW_REAL							{ $$ = template("double"); };
		 | IDENT							{ $$ = template("%s", $1); };
		 
array_of_type: KW_ARRAY KW_OF basic_data_type		{ $$ = template("%s*", $3); };
		  
type_declaration: 											{ $$ = ""; }
		        | KW_TYPE type_decl_list					{ $$ = $2; };
		 
type_decl_list: type_decl									{ $$ = $1; };
			  | type_decl_list type_decl					{ $$ = template("%s%s", $1, $2);  };
		 
type_decl: IDENT '=' data_type ';'												{ $$ = template("typedef %s %s;\n", $3, $1); };
		 | IDENT '=' KW_ARRAY array_size KW_OF basic_data_type ';'				{ $$ = template("typedef %s %s%s;\n", $6, $1, $4); };
		//| func
			  
var_declaration:									{ $$ = ""; };
			   | KW_VAR var_decl_list ';'			{ $$ = $2; };
		
var_decl_list: var_decl									{ $$ = $1; };
			 | var_decl_list ';' var_decl				{ $$ = template("%s%s", $1, $3);  };

var_decl: var_ident ':' data_type																			{ $$ = template("%s %s;\n", $3, $1); };
		| var_ident ':' KW_ARRAY array_size KW_OF basic_data_type 											{ $$ = template("%s %s%s;\n", $6, $1, $4); };
		//| var_decl_function																				{ $$ = template("%s", $1); };
		
subroutine_decl_list:	 																					{ $$ = ""; };
					  | subroutine_decl_list subroutine														{ $$ = template("%s%s", $1, $2);  };
					  
subroutine: subroutine_decl type_declaration var_declaration subroutine_decl_list subproutine_body ';'					{ $$ = template("%s%s%s\n%s\n%s}\n\n", $1, $2, $3, $4, $5);  };

subroutine_decl: KW_PROCEDURE IDENT '(' sub_arg_decl_list ')' ';'															{ $$ = template("void %s(%s)\n{\n", $2, $4);  };
			   | KW_PROCEDURE IDENT '(' ')' ';'																				{ $$ = template("void %s()\n{\n", $2);  };
			   | KW_FUNCTION IDENT '(' sub_arg_decl_list ')' ':'  data_type ';'												{ $$ = template("%s %s(%s)\n{\n%s result;\n", $7, $2, $4, $7);  };
			   | KW_FUNCTION IDENT '(' ')' ':'  data_type ';'																{ $$ = template("%s %s()\n{\n%s result;\n", $6, $2, $6);  };

sub_arg_decl_list: sub_arg_decl									{ $$ = $1; };
			 | sub_arg_decl_list ';' sub_arg_decl				{ $$ = template("%s, %s", $1, $3);  };

sub_arg_decl: var_ident ':' data_type																   				{ $$ = fix_subroutine_idents($1, $3, NULL); };
			| var_ident ':' KW_ARRAY array_size KW_OF basic_data_type 												{ $$ = fix_subroutine_idents($1, $6, $4); };
		//| var_decl_function																						{ $$ = template("%s", $1); };
		

		
subproutine_body: KW_BEGIN statements KW_END  																 	{ $$ = template("%s", $2); };
		
var_ident: IDENT							{ $$ = template("%s", $1); };
		 | IDENT ',' var_ident				{ $$ = template("%s, %s", $1, $3); };
		 
array_call: 								{ $$ = ""; };
		  | array_size						{ $$ = $1; };
		 
array_size: '[' expression ']'						{ $$ = template("[%s]", $2); };
		  | '[' expression ']' array_size			{ $$ = template("[%s]%s", $2, $4); };
		  
instruction: body 																							{ $$ = $1; };
		   | IDENT array_call ASSIGN expression																{ $$ = template("%s%s = %s;\n", $1, $2, $4); };
		   | KW_RESULT ASSIGN expression																	{ $$ = template("result = %s;\n", $3); };
		   | KW_IF expression KW_THEN statement																{ $$ = template("if (%s)\n%s", $2, $4); };
		   | KW_IF expression KW_THEN statement KW_ELSE statement											{ $$ = template("if (%s)\n%selse %s", $2, $4, $6); };
		   | KW_FOR IDENT array_call ASSIGN expression KW_TO expression KW_DO statement					    { $$ = template("for (%s%s = %s; %s%s <= %s; %s%s++)\n%s", $2, $3, $5, $2, $3, $7, $2, $3, $9); };
		   | KW_FOR IDENT array_call ASSIGN expression KW_DOWNTO expression KW_DO statement					{ $$ = template("for (%s%s = %s; %s%s >= %s; %s%s--) %s", $2, $3, $5, $2, $3, $7, $2, $3, $9); };
		   | KW_WHILE expression KW_DO statement															{ $$ = template("while (%s) %s", $2, $4); };
		   | KW_REPEAT statement KW_UNTIL expression														{ $$ = template("do\n%swhile (%s);\n", $2, $4); };
		   | IDENT ':' statement																			{ $$ = template("%s:%s", $1, $3); };
		   | KW_GOTO IDENT																					{ $$ = template("goto %s;\n", $2); };
		   | KW_RETURN																						{ $$ = template("return result;\n"); };
		   | IDENT array_call ASSIGN LIB_RS '(' ')'															{ $$ = template("gets(%s%s);\n", $1, $2); };
		   | IDENT array_call ASSIGN LIB_RI '(' ')'															{ $$ = template("scanf(\"%%d\", &%s%s);\n", $1, $2); };
		   | IDENT array_call ASSIGN LIB_RR '(' ')'															{ $$ = template("scanf(\"%%g\", &%s%s);\n", $1, $2); };
		   | KW_RESULT ASSIGN LIB_RS '(' ')'																{ $$ = template("gets(result);\n"); };
		   | KW_RESULT ASSIGN LIB_RI '(' ')'																{ $$ = template("scanf(\"%%d\", &result);\n"); };
		   | KW_RESULT ASSIGN LIB_RR '(' ')'																{ $$ = template("scanf(\"%%g\", &result);\n"); };

%%

