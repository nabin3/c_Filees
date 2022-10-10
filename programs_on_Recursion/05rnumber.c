			// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>

void prnt(int n) {
	if (n == 1)
		printf(" 1");
	else
	{
		printf(" %d", n);
		prnt(n - 1);
	}
}

int main()
{
	int n;
	printf("Enter number \n");
	scanf("%d", &n);
	prnt(n);
	printf("\n");
	return(0);
}
