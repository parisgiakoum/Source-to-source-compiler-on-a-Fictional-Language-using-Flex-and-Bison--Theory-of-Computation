#include "ptuclib.h"


/* Program TowersofHanoi */ 

/* Type declaration: */
/* Variable declaration: */
	int numdiscs;

/* Function declaration: */
void DoTowers(int NumDiscs, int OrigPeg, int NewPeg, int TempPeg)
{
	if (NumDiscs == 1) 
	{
	writeInteger(OrigPeg);
	writeString(" ---> ");
	writeInteger(NewPeg);
	writeString("\n");
	}
	else 
	{
	DoTowers(NumDiscs - 1,OrigPeg,TempPeg,NewPeg);
	writeInteger(OrigPeg);
	writeString(" ---> ");
	writeInteger(NewPeg);
	writeString("\n");
	DoTowers(NumDiscs - 1,TempPeg,NewPeg,OrigPeg);
	}
}

/* Main: */
int main() {
	writeString("Please enter the number of discs in the tower ===> ");
	scanf("%d", &numdiscs);
	writeString("\n");
	DoTowers(numdiscs,1,3,2);
	writeString("\n");

	return 0;
}
 
