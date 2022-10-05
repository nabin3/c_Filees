			// check whether a givebn number is prime or not
#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter the number :\n");
	scanf("%d", &a);
	for(i = 2; i <= a -1; i++)
		if(a % i == 0)
			break;
	if(i == a)
		printf("\n %d is a prime number", a);
	else
		printf("\n %d is not a prime number", a);
	return (0);
}
