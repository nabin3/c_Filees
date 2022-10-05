		//calculate sum of first n even numbers
#include<stdio.h>
int main()
{
	int n,i = 0,s = 0;
	printf("How many even number ?\n");
	scanf("%d", &n);
	while(i < 2 * n)
	{
		if(i % 2 == 0)
			s = s + i;
		i++;
	}
	printf("\n Some of %d even natural number is = %3d", n,s);
	return (0);
}

