/*#include<stdio.h>
int main()
{
	int i,j,rows,n,k;
	printf("Enter how many rows? ");
	scanf("%d", &rows);
	n = rows * 2 - 1;
	for(i = 1; i <= rows; i++)
	{
		k = i;
		for(j = 1; j <=n; j++)
		{
			if(j >= (n + 1) / 2 + 1 -i && j <= (n + 1) / 2 - 1 + i)
			{
				printf("%d", k);
			  	j < (n + 1) / 2? k++: k--;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}*/

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i = 1; i <= 4; i++)
	{
		k = i;
		for(j = 1; j <= 7; j++)
		{
			if(j >= 5 - i && j <= 3 + i)
			{
				printf("%d", k);
				j < 4? k++: k--;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}

