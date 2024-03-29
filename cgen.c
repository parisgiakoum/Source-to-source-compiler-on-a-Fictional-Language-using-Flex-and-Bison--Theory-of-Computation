#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "cgen.h"

extern int line_num;

void ssopen(sstream* S)
{
	S->stream = open_memstream(& S->buffer, & S->bufsize);
}

char* ssvalue(sstream* S)
{
	fflush(S->stream);
	return S->buffer;
}

void ssclose(sstream* S)
{
	fclose(S->stream);
}


char* template(const char* pat, ...)
{
	sstream S;
	ssopen(&S);

	va_list arg;
	va_start(arg, pat);
	vfprintf(S.stream, pat, arg );
	va_end(arg);

	char* ret = ssvalue(&S);
	ssclose(&S);
	return ret;
}

/* Helper functions */

char* string_ptuc2c(char* P)
{
	/* Just check and change the first and last characters */
	int Plen = strlen(P);
	assert(Plen>=2);
	P[0] = '"';
	P[Plen-1] = '"';

	return P;
}

char* fix_subroutine_idents (char* idents, char* data_type, char* array_size) {
	char* result;
	char* token;
	token = strtok(idents, ",");
	
	// Tokenize first argument
	// 1st case: argument is a fixed array
	if (token != NULL && array_size != NULL) {
		result = template("%s %s%s", data_type, token, array_size);
		token = strtok(NULL, ",");
	// else
	} else if (token != NULL && array_size == NULL) {
		result = template("%s %s", data_type, token);
		token = strtok(NULL, ",");
	}
	
	// Tokenize rest arguments
	while (token != NULL) {
		if (array_size != NULL) {
			result = template("%s, %s%s%s", result, data_type, token, array_size);
			token = strtok(NULL, ",");
		} else {
			result = template("%s, %s%s", result, data_type, token);
			token = strtok(NULL, ",");
		}
	}
	return result;
}


/*
	Report errors 
*/
 void yyerror (char const *pat, ...) {
 	va_list arg;
    fprintf (stderr, "line %d: ", line_num);

    va_start(arg, pat);
    vfprintf(stderr, pat, arg);
    va_end(arg);

	fprintf(stderr,"\n");

    yyerror_count++;
 }

int yyerror_count = 0;

const char* c_prologue = 
"#include \"ptuclib.h\"\n"
"\n"
;





