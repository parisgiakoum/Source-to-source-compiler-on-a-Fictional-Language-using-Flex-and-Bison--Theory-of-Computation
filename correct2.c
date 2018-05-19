#include "ptuclib.h"


/* Program useless */ 

/* Type declaration: */
	typedef char* string;

/* Variable declaration: */
	int i, j;
	string item;

/* Function declaration: */
double powerTo(double number, int power)
{
	double result;
	result = 1;
	if (power > 0) 
	{
	for (i = 0; i <= power - 1; i++) result = result * number;
	}
	else if (power < 0) 
	{
	for (i = 0; i >= power + 1; i--) result = (double) result / number;
	}
	else result = 1;
	return result;
}

void printShoppingList(int i, string shoppingList[1000], double priceList[1000], double sum)
{
	writeString("\n\nShopping list:\n");
	for (j = 0; j <= i - 1; j++) 
	{
	writeInteger(j + 1);
	writeString(":\tItem:\t\"");
	writeString(shoppingList);
	writeString("\"\n\tPrice:\t");
	writeReal(priceList[j]);
	writeString("€\n\n");
	shoppingList = shoppingList + 1;
	}
	writeString("\nTotal Price: ");
	writeReal(sum);
	writeString("€\n");
}

void shopping()
{
	string shoppingList[1000];
	double priceList[1000];
	string tempString;
	double sum;
	char exit;

	i = 0;
	sum = 0;
	exit = 'N';
	while ((exit != 'Y' && exit != 'y')) 
	{
	writeString("Give me an item: ");
	scanf("%s", &tempString);
	shoppingList[i] = tempString;
	writeString("\n");
	writeString("Give me its price in €: ");
	scanf("%lf", &priceList[i]);
	writeString("\n");
	sum = sum + priceList[i];
	i = i + 1;
	label:writeString("\nexit? y/n: ");
	scanf("%s", &exit);
	writeString("\n");
	if ((exit != 'y' && exit != 'Y' && exit != 'N' && exit != 'n')) 
	{
	writeString("Wrong input!\n");
	goto label;
	}
	}
	printShoppingList(i,shoppingList,priceList,sum);
}

void menu()
{
	double (*power)(double x, int y);
	int choice, temp2;
	double temp1;

	lbl:choice = -1;
	writeString("\nMenu:\nSelect equivalent option:\n\t1: Power operation\n\t2: Make a shopping list!\n\t3: Exit\n\nChoice: ");
	lbl2:scanf("%d", &choice);
	if (choice > 3 || choice < 1) 
	{
	writeString("\nWrong choice! Try again: ");
	goto lbl2;
	}
	if (choice == 1) 
	{
	writeString("\nGive me the base(positive or negative number): ");
	scanf("%lf", &temp1);
	writeString("\nGive me the power(positive or negative integer): ");
	scanf("%d", &temp2);
	writeString("\n");
	writeReal(temp1);
	writeString(" ^ ");
	writeInteger(temp2);
	writeString(" = ");
	power = powerTo;
	writeReal(power(temp1,temp2));
	writeString("\n");
	goto lbl;
	}
	else if (choice == 2) 
	{
	shopping();
	goto lbl;
	}
	else writeString("\nHope to see you again!\n");
}

/* Main: */
int main() {
	menu();

	return 0;
}
 
