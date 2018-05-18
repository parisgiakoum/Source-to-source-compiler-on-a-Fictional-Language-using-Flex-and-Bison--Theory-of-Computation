#include "ptuclib.h"


/* Program useless */ 

/* Type declaration: */
typedef char* string;
typedef double vector[3];

/* Variable declaration: */
int i, j;
string item;

/* Function declaration: */
int powerTo(int number, int power)
{
	int result;
		
	result = 1;
	for (i = 1; i <= power; i++) result = result * number;
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
int exit;

	i = 0;
	sum = 0;
	exit = 1;
	while ((exit != 0)) 
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
	label:writeString("\nPress 1 to add more items or 0 to exit: ");
	scanf("%d", &exit);
	writeString("\n");
	if ((exit != 0 && exit != 1)) 
	{
	writeString("Wrong number!\n");
	goto label;
	}
	}
	printShoppingList(i,shoppingList,priceList,sum);
}

/* Main: */
int main() {
	writeString("5 ^ 3 = ");
	writeInteger(powerTo(5,3));
	writeString("\n\n");
	shopping();

return 0;

}
 
