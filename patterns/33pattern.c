/*#include<stdio.h>
int main()
{
	int i,j,k;
	for(i = 1; i <= 4; i++)
	{
		k = 'A';
		for(j = 1; j <= 7; j++)
		{
			if(j <= 5 - i || j >= 3 + i)
				printf("%c", k);
			else
				printf(" ");
			k++;
		}
		printf("\n");
	}
	return (0);
}*/

#include<stdio.h>
int main()
{
	int i,j,n;
	char k;
	printf("Enter number :");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		k = 'A';
		for(j = 1; j <= 2 * n -1; j++)
		{
			if(j <= n + 1 - i || j >= n - 1 + i)
				printf("%c", k);
			else
				printf(" ");
			k++;
		}
		printf("\n");
	}
	return (0);
}
