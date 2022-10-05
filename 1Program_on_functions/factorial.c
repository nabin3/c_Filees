		// write a function to calculate factorial of a number using(takes something, returns something)
long fact(int a)
{
	long f = 1;
	int i = 1;
	while(i <= a)
	{
		f *= i;
		i++;
	}
	return f;
}

#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number ");
	scanf("%d", &x);
	printf("Factorial of %d is = %ld\n", x,fact(x));
	return 0;
}
