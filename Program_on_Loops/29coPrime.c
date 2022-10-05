		// program to check co-prime numbers
#include<stdio.h>
int main()
{
/*	int a,b,l;
	printf("Enter two numbers\n");
	scanf("%d %d", &a,&b);
	for(l = a > b? a: b; l <= a * b; l += a > b? a: b)
	       if(l % a == 0 && l % b == 0)
	       		break;
	if(l == a * b)
		printf("\n Numbers are co-prime");
	else
		printf("\n Numbers are not co-prime");
	return (0);*/


	int a,b,f = 1;
	printf("Enter two numbers\n");
	scanf("%d %d", &a,&b);
	for(int i = 2; i <= (a < b? a: b); i++)
		if(a % i == 0 && b % i == 0)
		{
			f = 0;
			break;
		}
	if(f)
		printf("Numbers are co-prime\n");
	else
		printf("Numbers are not co-prime\n");
	return (0);
}	

