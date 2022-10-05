			// primt n co-prime numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 2,b,min,n,i;
	printf("How many co-prime numbers do you want to print?\n");
	scanf("%d", &n);
	while(n)
	{
		for(b = 2; b <= a; b++)
		{
			// code to check if a and b are co-prime
			min = a < b? a: b;
			for(i = 2; i <= min; i++)
				if(a % i == 0 && b % i == 0)
					break;
			if(i == min + 1)
			{
				printf("(%d , %d)", a,b);
				n--;
				if(n == 0)
					exit(0);
			}
		}
		a++;
	}
	return (0);
}
