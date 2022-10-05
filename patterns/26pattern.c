#include<stdio.h>
int main()
{
	int i , j , k = 'A';
	for(i = 1; i <= 4; i++)
	{
		k++;
		for(j = 1; j <= 4; j++)
			if(j <= i)
				printf("%c", k - j);
			else
				printf(" ");
		printf("\n");
	}
	return (0);
}

