		//multiplication table
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:\n");
	scanf("%d", &n);
	for(i = 1;i <= 10;i++)
		printf("%d * %2d = % 4d\n", n,i,n * i);
	return (0);
}


