#include "ptuclib.h"


/* Program mysample */ 

/* Type declaration: */
typedef char* foo;
typedef char iodjei;
typedef foo testarray[10];
typedef int testar2[5][10];

/* Variable declaration: */
int i;
double x, y;
char s[80];
char* stringvar;
foo testarraye;

/* Main: */
int main() {
writeString("PI=");
writeReal(3.1415927);
writeString("\n");
writeString("PI/2=");
writeReal((3.1415927 / 2));
writeString("\n");
writeString("2*PI=");
writeReal((3.1415927 * 2));
writeString("\n");
i = 1 + 2 + 3 + 4 + 5;
writeInteger(i);
testarraye = "\npipa\n";
writeString(testarraye);
goto lbl;
for (i = 1 - 1; i <= 10 / 2; i++)
{
writeString("i= ");
writeInteger(i);
writeString("\n");
 }
writeString("\n\n");
for (i = 1 * 5; i >= 4 - 0; i--) {
writeString("i= ");
writeInteger(i);
writeString("\n");
 }
writeString("\n\n");
while (i > 0) {
writeString("i= ");
writeInteger(i);
writeString("\n");
i = i - 1;
 }
lbl:i = 5;
writeString("\n\n");
do
{
writeString("i= ");
writeInteger(i);
writeString("\n");
i = i - 1;
break;
 }
while ((i >= 0));
writeInteger(i);
writeString("\n\n");
if ((3.1415927 * 2) < 5)
{
writeString("thisisatest\n");
writeString("test2\n");
 }
else if ((3.1415927 * 2) > 5)
{
writeString("PI2 > 5\n");
writeString("onelseif\n");
 }
writeString("END\n");
 }
 
