#include "ptuclib.h"


/* Program useless */ 

/* Type declaration: */
	typedef char* string;

/* Variable declaration: */
	int i, k;

/* Function declaration: */
void nl()
{
	writeString("\n");
}

void compute(int n, int k)
{
	int j;

	int cube(int i)
{
	int result;
	result = i * i * i;
	return result;
}

j = (int) (100 - n) + cube(k);
	writeString("Computed (N-n)+k^3 = ");
	writeInteger(j);
	nl();
}

int promptForInteger(string prompt)
{
	int result;
	writeString(prompt);
	scanf("%d", &result);
	writeString("You typed: ");
	writeInteger(result);
	nl();
	return result;
}

/* Main: */
int main() {
	k = promptForInteger("Type a number: ");
	i = promptForInteger("Type another number: ");
	compute(k,i);

	return 0;
}
 
