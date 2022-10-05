	// write a recursive function to print first n natural numbers
#include<stdio.h>

void natural(int n)
{
	if(n == 1)
		printf("%d ", n);
	else
	{
		printf("%d ", n);
       		natural(n - 1);	
	}
}

int main()
{
	int n;
	printf("Enter how many number :");
	scanf("%d", &n);
	natural(n);
	return(0);
}
