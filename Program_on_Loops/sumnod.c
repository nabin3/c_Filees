		//calculate sum of first n odd numbers
#include<stdio.h>
int main()
{
	int n,i = 1,s = 0;
	printf("Enter how many odd numbers?\n");
	scanf("%d", &n);
	while(i <= 2 * n)
	{
		if(i % 2)
			s = s + i;
		i ++;
	}
	printf("\n sum of first %d odd numbers is %d", n,s);
	return (0);
}

