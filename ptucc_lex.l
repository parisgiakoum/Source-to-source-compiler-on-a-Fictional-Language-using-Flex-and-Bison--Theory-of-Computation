%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
/*#include "ptucc_parser.tab.h"*/
/*#include "cgen.h"*/

/* define tokens */

#define IDENTIFIER 258
#define POSINT 262
#define REAL 263
#define STRING 264
#define SEMICOLON 265
#define DOT 266
#define LEFT_PARENTHESIS 267
#define RIGHT_PARENTHESIS 268
#define OP_PLUS 269
#define OP_MULTIPLY 270
#define BOOL_TRUE 298
#define BOOL_FALSE 299
#define ASSIGNMENT 300
#define OP_DIVIDE 301
#define OP_MINUS 302
#define OP_EQUAL 303
#define OP_INEQUAL 304
#define OP_LESS 305
#define OP_GREATER 306
#define OP_LESSEQ 307
#define OP_GREATEREQ 308

#define COMMA 309
#define LEFT_BRACKET 310
#define RIGHT_BRACKET 311
#define STATEMENT 312

#define KEYWORD_PROGRAM 259
#define KEYWORD_BEGIN 260
#define KEYWORD_END 261
#define KEYWORD_AND 271
#define KEYWORD_DIV 272
#define KEYWORD_FUNCTION 273
#define KEYWORD_MOD 274
#define KEYWORD_PROCEDURE 275
#define KEYWORD_RESULT 276
#define KEYWORD_ARRAY 277
#define KEYWORD_DO 278
#define KEYWORD_GOTO 279
#define KEYWORD_NOT 280
#define KEYWORD_RETURN 281
#define KEYWORD_BOOLEAN 282
#define KEYWORD_ELSE 283
#define KEYWORD_IF 284
#define KEYWORD_OF 285
#define KEYWORD_REAL 286
#define KEYWORD_THEN 287
#define KEYWORD_CHAR 288
#define KEYWORD_FOR 289
#define KEYWORD_INTEGER 290
#define KEYWORD_OR 291
#define KEYWORD_REPEAT 292
#define KEYWORD_UNTIL 293
#define KEYWORD_VAR 294
#define KEYWORD_WHILE 295
#define KEYWORD_TO 296
#define KEYWORD_DOWNTO 297

int line_num = 1;

/* 
	A primitive macro facility:
	just one macro is allowed to be defined! 
*/
#define MAXMACRO 32
char* mactable[MAXMACRO][2];
int mactable_size = 0;

/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

ID [a-zA-Z_][0-9a-zA-Z_]*
DIGIT  [0-9]
NUMBER  {DIGIT}{DIGIT}*
DECIMAL {NUMBER}("."{NUMBER})?
REAL    {DECIMAL}([eE][+-]?{NUMBER})?
STRING  ['"][^['\n]*("\'")*("\"")*[^'\n]*['"]

%x comment
%x macro
%x commentLine

%%

@defmacro[ \r\t]+       BEGIN(macro);
<macro>{ID}             {
							/* Store macro name */
							char* name = strdup(yytext);
							char* def = NULL;
							size_t deflen = 0;
							char c;

							FILE* deff = open_memstream(&def, &deflen);

							while((c=input())!='\n')
							   fputc(c, deff);
							fclose(deff);

							if(!set_macro(name, def))
								printf("lexer error: failed to define macro '%s'\n", name); /*yyerror("lexer error: failed to define macro '%s'\n", name);*/
							BEGIN(INITIAL);
						};

program					return KEYWORD_PROGRAM;
begin 					return KEYWORD_BEGIN;
end						return KEYWORD_END;
and						return KEYWORD_AND;
div						return KEYWORD_DIV;
function				return KEYWORD_FUNCTION;
mod						return KEYWORD_MOD;
procedure				return KEYWORD_PROCEDURE;
result					return KEYWORD_RESULT;
array					return KEYWORD_ARRAY;
do 						return KEYWORD_DO;
goto					return KEYWORD_GOTO;
not						return KEYWORD_NOT;
return 					return KEYWORD_RETURN;
boolean					return KEYWORD_BOOLEAN;
else					return KEYWORD_ELSE;
if 						return KEYWORD_IF;
of						return KEYWORD_OF;
real 					return KEYWORD_REAL;
then					return KEYWORD_THEN;
char					return KEYWORD_CHAR;
for 					return KEYWORD_FOR;
integer					return KEYWORD_INTEGER;
or 						return KEYWORD_OR;
repeat					return KEYWORD_REPEAT;
until					return KEYWORD_UNTIL;
var 					return KEYWORD_VAR;
while					return KEYWORD_WHILE;
to 						return KEYWORD_TO;
downto					return KEYWORD_DOWNTO;

true					return BOOL_TRUE;
false					return BOOL_FALSE;

{ID}  					{
						   char* def = get_macro(yytext);
						   if(def==NULL) {
						   		/* yylval.crepr = strdup(yytext); */
						   		return IDENTIFIER;
						   	}
						   for(int i=strlen(def); i>0; i--) {
						   	  unput(def[i-1]);
						   }
						}	

{NUMBER}				{/* yylval.crepr = strdup(yytext);*/ return POSINT; }
{REAL}					{/* yylval.crepr = strdup(yytext);*/ return REAL; }
{STRING}				{ /* yylval.crepr = strdup(yytext);*/ return STRING; }

"+"						return OP_PLUS;
"-"						return OP_MINUS;
"*"						return OP_MULTIPLY;
"\\"					return OP_DIVIDE;
"="						return OP_EQUAL;
"<>"					return OP_INEQUAL;
"<"						return OP_LESS;
">"						return OP_GREATER;
"<="					return OP_LESSEQ;
">="					return OP_GREATEREQ;
"&&"					return KEYWORD_AND;
"||"					return KEYWORD_OR;
"!"						return KEYWORD_NOT;

";"						return SEMICOLON;
"."						return DOT;
"("						return LEFT_PARENTHESIS;
")"						return RIGHT_PARENTHESIS;
","						return COMMA;
"["						return LEFT_BRACKET;
"]"						return RIGHT_BRACKET;
":="					return ASSIGNMENT;
":"						return STATEMENT;

"(*"					BEGIN(comment);
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by ')'s */
<comment>\n             ++line_num;
<comment>"*"+")"        BEGIN(INITIAL);

"//"					BEGIN(commentLine);
<commentLine>[^\n]*		/* eat anything until newline */
<commentLine>\n 		++line_num; BEGIN(INITIAL);

[ \r\t]					/* skip whitespace */
\n 						++line_num;
<<EOF>> 				return EOF;

.        { printf("lexical error: unrecognized literal '%s'\n", yytext); /*yyerror("lexical error: unrecognized literal '%s'\n", yytext); */}


%%

int set_macro(char* name, char* def)
{
	/* Check to see if macro already defined, and redefine it. */
	int i;
	for(i=0; i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0) {
			/* found ! */
			free(name);
			free(mactable[i][1]);
			mactable[i][1] = def;
			break;
		}
	}
	if(i<mactable_size)
		return 1;
	else if(mactable_size < MAXMACRO) {
		/* new entry */
		assert(i==mactable_size);
		mactable[i][0] = name;
		mactable[i][1] = def;
		mactable_size++;
		return 1;
	}
	else
		return 0;
}

char* get_macro(char* name)
{
	for(int i=0;i<mactable_size; i++) {
		if(strcmp(mactable[i][0], name)==0)
			return mactable[i][1];
	}
	return NULL;
}

int main()
{
	int token;

	printf("Tokenize ptuc from standard input\n");
	while((token =  yylex())!=EOF) {
		printf("Line: %5d     token: %3d   Text= %s\n", line_num, token, yytext);
	}
}




