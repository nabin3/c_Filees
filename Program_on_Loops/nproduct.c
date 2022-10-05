		// print product of first n natural numbers
#include<stdio.h>
int main()
{
	int n,i;
	long s = 1;
	printf("Enter a natural number\n");
	scanf("%d", &n);
	for(i = 2; i <= n;i++)
		s = s * i;
	printf("\n Product of first %d natural number is = %4ld", n,s);
	return (0);
}
