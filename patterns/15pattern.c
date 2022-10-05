#include<stdio.h>
int main()
{
	int i,j,k = 0,c;
	for(i = 1; i <= 9; i++)
	{
		i <= 5? k++: k--;
		c = 1;
		for(j = 1; j <= 5; j++)
		{
			if(j >= 6 - k)
			{
				printf("%d", c);
				c++;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}
					

