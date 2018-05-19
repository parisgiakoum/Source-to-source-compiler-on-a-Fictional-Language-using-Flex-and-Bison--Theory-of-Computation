#include "ptuclib.h"


/* Program MaximumSubarraySum */ 

/* Type declaration: */
/* Variable declaration: */
	int n, max_sum, i;
	int arr[1000];

/* Function declaration: */
int max2(int a, int b)
{
	int result;
	if (a > b) result = a;
	else result = b;
	return result;
}

int max(int a, int b, int c)
{
	int result;
	result = max2(max2(a,b),c);
	return result;
}

int maxCrossingSum(int arr[1000], int l, int m, int h)
{
	int result;
	int sum, left_sum, right_sum, i;

	sum = 0;
	left_sum = -32767;
	for (i = m; i >= l; i--) 
	{
	sum = sum + arr[i];
	if (sum > left_sum) left_sum = sum;
	}
	sum = 0;
	right_sum = -32767;
	for (i = m + 1; i <= h; i++) 
	{
	sum = sum + arr[i];
	if (sum > right_sum) right_sum = sum;
	}
	result = left_sum + right_sum;
	return result;
}

int maxSubArraySum(int arr[1000], int l, int h)
{
	int result;
	int m;

	if (l == h) 
	{
	result = arr[l];
	return result;
	}
	m = (l + h) / 2;
	result = max(maxSubArraySum(arr,l,m),maxSubArraySum(arr,m + 1,h),maxCrossingSum(arr,l,m,h));
	return result;
}

/* Main: */
int main() {
	writeString("\nThis is a correct Divide and Conquer based program for maximum subarray sum problem in fl!\n\n");
	writeString("Give me the size of your array: ");
	scanf("%d", &n);
	writeString("\n");
	for (i = 0; i <= n - 1; i++) 
	{
	writeString("Give me value ");
	writeInteger(i + 1);
	writeString(": ");
	scanf("%d", &arr[i]);
	}
	max_sum = maxSubArraySum(arr,0,n - 1);
	writeString("\nMaximum contiguous sum is: ");
	writeInteger(max_sum);
	writeString("\n");

	return 0;
}
 
