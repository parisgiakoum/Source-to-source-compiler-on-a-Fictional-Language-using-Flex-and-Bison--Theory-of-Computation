#include "ptuclib.h"


/* Program quicksort */ 

/* Type declaration: */

/* Variable declaration: */
int cnt, size;
int numbersgiven[5];

/* Function declaration: */
void QSort(int numbers[5], int left, int right)
{
int pivot, l_ptr, r_ptr;


l_ptr = left;
r_ptr = right;
pivot = numbers[left];
while ((left < right)) {
while (((numbers[right] >= pivot) && (left < right))) right = right - 1;
if ((left != right))
{
numbers[left] = numbers[right];
left = left + 1;
}
while (((numbers[left] <= pivot) && (left < right))) left = left + 1;
if ((left != right))
{
numbers[right] = numbers[left];
right = right - 1;
}
}
numbers[left] = pivot;
pivot = left;
left = l_ptr;
right = r_ptr;
if ((left < pivot))
QSort(numbers,left,pivot - 1);
if ((right > pivot))
QSort(numbers,pivot + 1,right);
}

/* Main: */
int main() {
writeString("How many numbers?\n");
scanf("%d", &size);
cnt = 0;
while ((cnt < size)) {
writeString("Give number\n");
scanf("%d", &numbersgiven[cnt]);
cnt = cnt + 1;
}
QSort(numbersgiven,0,size - 1);
}
 
