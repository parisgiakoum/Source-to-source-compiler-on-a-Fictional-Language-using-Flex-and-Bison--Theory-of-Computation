#include "ptuclib.h"


/* Program mysample */ 

/* Type declaration: */
typedef char* foo;
typedef char iodjei;
typedef foo testarray[10];

/* Variable declaration: */
int i;
double x, y;
char s, testar2[80];
int t[2];
char* stringvar;
foo testarraye;

/* Function declaration: */
void add(int n, int k, int g[10], int h[10], int f[10])
{
typedef int int1;
int1 j;


j = n + k;
writeInteger(j);
writeString("\n\n");
}

int cube(int i)
{
int result;


result = i * i * i;
return result;
}

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
i = cube(3);
writeString("cube(3) = ");
writeInteger(i);
writeString("\n\n");
for (i = 1 - 1; i <= 10 / 2; i++)
{
writeString("i= ");
writeInteger(i);
writeString("\n");
}
writeString("\n\n");
t[0] = 17;
t[1] = 32;
writeInteger(t[0]);
writeInteger(t[1]);
writeString("\n\n");
for (t[0] = t[1]; t[0] >= 4 - 0; t[0]--) {
writeString("t[0] = ");
writeInteger(t[0]);
writeString("\n");
}
writeString("\n\n");
while (i > 0) {
writeString("i= ");
writeInteger(i);
writeString("\n");
i = i - 1;
}
writeString("\n\n");
do
{
writeString("i= ");
writeInteger(i);
writeString("\n");
i = (int)i - 1;
}
while ((i >= 0));
gets(testar2);
writeString(testar2);
writeString("\n\n");
scanf("%d", &i);
writeInteger(i);
writeString("\n\n");
scanf("%g", &x);
writeReal(x);
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
}
 
