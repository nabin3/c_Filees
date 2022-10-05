/*#include<stdio.h>
int main()
{
	int i,j,k = 1;
	for(i = 1; i <= 7; i++)
	{
		for(j = 1; j <= 4; j++)
		{
			if(j <= k)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		i < 4? k++: k--;
	}
	return (0);
}*/

#include<stdio.h>
int main()
{
	int i,j,rows,k = 0;
	printf("Enter rows\n");
	scanf("%d", &rows);
	for(i = 1; i <= rows; i++)
	{
		if(rows % 2)
			i <= (rows + 1) / 2? k++: k--;
		else
		{
			if(i <= rows / 2)
				k++;
			if(i > rows / 2 + 1)
				k--;
		}
		for(j = 1; j <= (rows + 1) / 2; j++)
		{
			if(j <= k)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}	
