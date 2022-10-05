#include<stdio.h>
int main()
{
	int i = 2, j, n, flag;
	printf("Enter how many prime number you want to print");
	scanf("%d", &n);
	printf("First %d prime numbers are \n", n);
	while(n)
	{
		flag = 1;
		for(j = 2; j * j <= i; j++)
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		if(flag)
		{
			printf("  %d", i);
			n--;
		}
		i++;
	}
	return (0);
}

