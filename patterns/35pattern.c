/*#include<stdio.h>
int main()
{
	int i, k, flag = 1;
//	printf("enter row numbers ");
//	scanf("%d", &row);
	for(i = 1, k = 0; i <= 7; i++)
	{
		if(i < 4 - k)
			printf(" ");
		else
		{
			if(flag)
				printf("*");
			else
				printf(" ");
			flag = 1 - flag;
		}
		if(i == 4 + k)
		{
			k++;
			printf("\n");
			if(i == 7)
				break;
			i = 0;
			flag = 1;
		}
	}
	return (0);
}*/


#include<stdio.h>
int main()
{
	int i, k, flag = 1, row;
	printf("enter row numbers ");
	scanf("%d", &row);
	for(i = 1, k = 0; i <= row * 2 -1; i++)
	{
		if(i < row - k)
			printf(" ");
		else
		{
			if(flag)
				printf("*");
			else
				printf(" ");
			flag = 1 - flag;
		}
		if(i == row + k)
		{
			k++;
			printf("\n");
			if(i == row * 2 -1)
				break;
			i = 0;
			flag = 1;
		}
	}
	return (0);
}
