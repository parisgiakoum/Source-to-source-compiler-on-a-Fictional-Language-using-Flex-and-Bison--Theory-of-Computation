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

%token OP_CAST
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

%left KW_OR
%left KW_AND
%left '=' OP_INEQUAL '<' '>' OP_LESSEQ OP_GREATEREQ
%left '-' '+'
%left '*' '/' KW_DIV KW_MOD
%right OP_CAST
//%right '+' '-'
%right KW_NOT '!'

%%

program:  program_decl var_decl proc_decl body '.'   		
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

// statement sinartisewn
statements: 				        	{ $$ = ""; };
statements: statement_list		   		{ $$ = $1; };

statement_list: statement                     
			  | statement_list ';' statement  { $$ = template("%s%s", $1, $3); }; 


statement: proc_call  						{ $$ = template("%s;\n", $1); };

proc_call: IDENT '(' arguments ')' 			{ $$ = template("%s(%s)", $1, $3); };

arguments :									{ $$ = ""; }
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
		  //| OP_CAST							{ $$ = template("(
		  |	expression '+' expression		{ $$ = template("%s + %s", $1, $3); };
		  | expression '-' expression		{ $$ = template("%s - %s", $1, $3); };
		  | expression '*' expression		{ $$ = template("%s * %s", $1, $3); };
		  | expression '/' expression		{ $$ = template("%s / %s", $1, $3); };
		  | expression KW_DIV expression		{ $$ = template("%s / %s", $1, $3); };
		  | expression mod expression		{ $$ = template("%s % %s", $1, $3); };
		  | KW_NOT expression				{ $$ = template("!%s", $2); };
		  | '-' expression					{ $$ = template("-%s", $2); };
		  | '+' expression					{ $$ = template("%s", $2); };
		  | expression = expression			{ $$ = template("%s == %s", $1, $3); };
		  |	expression OP_INEQUAL expression		{ $$ = template("%s != %s", $1, $3); };
		  | expression '<' expression		{ $$ = template("%s < %s", $1, $3); };
		  | expression '>' expression		{ $$ = template("%s > %s", $1, $3); };
		  | expression OP_LESSEQ expression		{ $$ = template("%s <= %s", $1, $3); };
		  | expression OP_GREATEREQ expression		{ $$ = template("%s >= %s", $1, $3); };
		  | expression KW_AND expression		{ $$ = template("%s && %s", $1, $3); };
		  | expression KW_OR expression		{ $$ = template("%s || %s", $1, $3); };
		  
data_type: KW_INTEGER						{ $$ = template("int"); };
		 | KW_BOOLEAN						{ $$ = template("int"); };
		 | KW_CHAR							{ $$ = template("char"); };
		 | KW_REAL							{ $$ = template("real"); };
		 | array_decl						{ $$ = $1; };
		 | func_decl						{ $$ = $1; };
		 | type_decl						{ $$ = $1; };
		 
var_decl: %empty							{ $$ = ""; };
		| KW_VAR var_decl_list

var_decl_list: var_ident ':' data_type ';'
		
var_ident: IDENT
		 | IDENT ',' var_ident

array_decl:

type_decl: 

func_decl:

%%

int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
