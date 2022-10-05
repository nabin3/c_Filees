			// HCF of two numbers
#include<stdio.h>
int main()
{
	int a,b,s;
	printf("Enter two numbers \n");
	scanf("%d %d", &a,&b);
	for(s = a<b?a:b; s >= 1; s--)
		if(a % s == 0 && b % s == 0)
			break;
	printf("\n HCF of %d and %d is %d \n", a,b,s);
	return (0);
}
