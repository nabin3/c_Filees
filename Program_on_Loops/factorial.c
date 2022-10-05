			// factorial of n
#include<stdio.h>
int main()
{
	int n;
	long f = 1;
	printf("Enter a natural number\n");
	scanf("%d", &n);
	while(n >= 1)
	{
		f *= n;
		n--;
	}
	printf("\nFactorial is = %ld", f);
	return (0);
}




	
