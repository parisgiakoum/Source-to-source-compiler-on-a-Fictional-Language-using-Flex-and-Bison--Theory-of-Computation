#include "ptuclib.h"


/* Program calculate */ 

/* Type declaration: */

/* Variable declaration: */
int limit, number, counter;

/* Function declaration: */
int prime(int n)
{
int result;
int i;
int isPrime;


if (n < 0)
result = prime(-n);
else if (n < 2)
result = 0;
else if (n == 2)
result = 1;
else if (n % 2 == 0)
result = 0;
else {
i = 3;
isPrime = 1;
while (isPrime && (i <= n / 2)) {
isPrime = n % i > 0;
i = i + 2;
}
result = isPrime;
}
return result;
}

/* Main: */
int main() {
scanf("%d", &limit);
counter = 0;
number = 2;
while (number <= limit) {
if (prime(number))
{
counter = counter + 1;
writeInteger(number);
writeString(" ");
}
number = number + 1;
}
writeString("\n");
writeInteger(counter);
writeString("\n");
}
 
