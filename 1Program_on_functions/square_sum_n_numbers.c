		// Write a function to calculate sum of squares of first N natural numbers
long squm(int x)
{
	long sum = 0;
	for(int i = 1; i <= x; i++)
		sum += i*i;
	return sum;
}


#include<stdio.h>
int main()
{
	int n;
	printf("Enter how many natural number ");
	scanf("%d", &n);
	printf("Some of square of %d natural numbers is = %ld \n", n, squm(n));
	return 0;
}

