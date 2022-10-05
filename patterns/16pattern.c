#include<stdio.h>
int main()
{
	int i,j,k = 0;
	for(i = 1; i <= 7; i++)
	{
		i < 5? k++: k--;
		for(j = 1; j <= 7; j++)
			if(j == k || j == 8 - k)
				if(i == j)		// if(i == 8 - j)
							// 	printf("/");
							// else
							// 	printf("\\");
					printf("\\");
				else
					printf("/");
			else 
				printf("*");
		printf("\n");
	}
	return (0);
}
