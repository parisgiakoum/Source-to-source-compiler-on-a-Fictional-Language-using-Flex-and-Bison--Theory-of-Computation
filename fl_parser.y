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
%type <crepr> data_type
%type <crepr> func_data_type
%type <crepr> var_decl
%type <crepr> var_decl_list
%type <crepr> var_ident
%type <crepr> array_decl
%type <crepr> array_size
%type <crepr> array_call
%type <crepr> array_call_size
%type <crepr> type_decl
%type <crepr> type_decl_list
%type <crepr> subroutine_list
%type <crepr> subroutine
%type <crepr> subroutine_decl
%type <crepr> instruction

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

program:  program_decl type_decl var_decl subroutine_list body '.'   		
{ 
	/* We have a successful parse! 
		Check for any errors and generate output. 
	*/
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */ \n\n", $1);
		printf("int main() %s \n", $2); //WRONG!!!
	}
};


program_decl : KW_PROGRAM IDENT ';'  	{ $$ = $2; };

body : KW_BEGIN statements KW_END   	{ $$ = template("{\n %s \n }\n", $2); };

statements: %empty			        	{ $$ = ""; };
statements: statement_list		   		{ $$ = $1; };

statement_list: statement                     
			  | statement_list ';' statement  { $$ = template("%s%s", $1, $3); }; 


statement: instruction						{ $$ = template("%s;\n", $1); };

proc_call: IDENT '(' arguments ')' 			{ $$ = template("%s(%s)", $1, $3); };

arguments :	%empty							{ $$ = ""; }
	 	  | arglist 						{ $$ = $1; };

arglist: expression							{ $$ = $1; }
       | arglist ',' expression 			{ $$ = template("%s,%s", $1, $3);  };

expression: POSINT 							/* Default action: $$ = $1 */
          | REAL							
          | IDENT							
          | KW_TRUE							{ $$ = template("1"); };
          | KW_FALSE						{ $$ = template("0"); };
          | STRING 							{ $$ = string_ptuc2c($1); };
		  | '(' expression ')'				{ $$ = template("(%s)", $2); };
		  | CAST_INTEGER expression			{ $$ = template("(int) %s", $2); };
		  | CAST_BOOLEAN expression			{ $$ = template("(int) %s", $2); };
		  | CAST_CHAR expression			{ $$ = template("(char) %s", $2); };
		  | CAST_REAL expression			{ $$ = template("(double) %s", $2); };
		  |	expression '+' expression		{ $$ = template("%s + %s", $1, $3); };
		  | expression '-' expression		{ $$ = template("%s - %s", $1, $3); };
		  | expression '*' expression		{ $$ = template("%s * %s", $1, $3); };
		  | expression '/' expression		{ $$ = template("%s / %s", $1, $3); };
		  | expression KW_DIV expression		{ $$ = template("%s / %s", $1, $3); };
		  | expression KW_MOD expression		{ $$ = template("%s % %s", $1, $3); };
		  | KW_NOT expression				{ $$ = template("!%s", $2); };
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
		  | proc_call
		  | array_call

data_type: KW_INTEGER						{ $$ = template("int"); };
		 | KW_BOOLEAN						{ $$ = template("int"); };
		 | KW_CHAR							{ $$ = template("char"); };
		 | KW_REAL							{ $$ = template("real"); };
		 | array_decl						{ $$ = $1; };
		 | func_data_type					{ $$ = $1; };
		 | IDENT

func_data_type: KW_FUNCTION '(' var_decl_list ')' ':' data_type

var_decl: %empty							{ $$ = ""; };
		| KW_VAR var_decl_list ';'

var_decl_list: var_ident ':' data_type
			 | var_decl_list ';' var_decl_list
		
var_ident: IDENT
		 | IDENT ',' var_ident

array_decl: KW_ARRAY array_size KW_OF data_type

array_size: %empty
          | '[' expression ']' array_size
		  
array_call: IDENT array_call_size

array_call_size: '[' expression ']' array_size
 
type_decl: %empty
		 | KW_TYPE type_decl_list

type_decl_list: IDENT '=' data_type ';'
			  | type_decl_list type_decl_list

subroutine_list: %empty						{ $$ = ""; };
		       | subroutine_list subroutine
			   
subroutine: subroutine_decl type_decl var_decl subroutine_list body ';'
		  
subroutine_decl: KW_PROCEDURE IDENT '(' var_decl_list ')' ';'
			   | KW_PROCEDURE IDENT '(' ')' ';'
			   | KW_FUNCTION IDENT '(' var_decl_list ')' ':'  data_type ';'
			   | KW_FUNCTION IDENT '(' ')' ':'  data_type ';'

instruction: body
		   | IDENT ASSIGN expression
		   | KW_RESULT ASSIGN expression
		   | KW_IF expression KW_THEN instruction
		   | KW_IF expression KW_THEN instruction KW_ELSE instruction
		   | KW_FOR IDENT ASSIGN expression KW_TO expression KW_DO instruction
		   | KW_FOR IDENT ASSIGN expression KW_DOWNTO expression KW_DO instruction
		   | KW_WHILE expression KW_DO instruction
		   | KW_REPEAT instruction KW_UNTIL expression
		   | IDENT ':' instruction
		   | KW_GOTO IDENT
		   | KW_RETURN
		   | proc_call

%%

int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
