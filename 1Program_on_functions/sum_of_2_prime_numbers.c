		// wrrite a program to represent a number as sum of two prime numbers
#include<stdio.h>
int nextPrime(int);
int isPrime(int);

int main()
{
	int x, i;
	printf("Enter a valid number ");
	scanf("%d", &x);
	if(x > 2)
		printf("valid input \n");
	else
		printf("Invalid input \n");
	for(i = 2; i <= x - i; i = nextPrime(i))
	{
		if(isPrime(x - i))
		{
			printf("%d + %d = %d \n", i, x - i, x);
		}
	}
	return(0);
}

int nextPrime(int p)
{
	do{
		p++;
	}while(!isPrime(p));
	return(p);
}

int isPrime(int n)
{
	int i = 2;
	while(i * i <= n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return(1);
}
