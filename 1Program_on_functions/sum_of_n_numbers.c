		// Write a function to calculate sum of first N natural numbers
int snm(int x)
{
	int sum = 0;
	for(int i = 0; i <= x; i++)
		sum += i;
	return sum;
}

#include<stdio.h>
int main()
{
	int n;
	printf("Enter how many natural number you want to add ");
	scanf("%d", &n);
	printf("Some of %d natural numbers is = %d \n", n, snm(n));
	return 0;
}

