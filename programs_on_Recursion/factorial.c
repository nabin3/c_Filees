		// write a recursive function to calculate factorial of a number
#include<stdio.h>

long fact(int n)
{
	if(n > 0)
		return(n * fact(n - 1));
	return(1);
}

int main()
{
	int s;
	printf("Enter a number :");
	scanf("%d", &s);
	printf("Factorial of %d is = %ld \n", s, fact(s));
       return(0);
}       
