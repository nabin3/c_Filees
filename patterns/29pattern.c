#include<stdio.h>
int main()
{
	int i, j;
	char p, k = 'A';
	for( i = 1; i <= 5; i++)
	{
		p = k;
		k = k + i + 1;
		for(j = 1; j <= 5; j++)
			if(j >= 6 - i)
			{
				printf("%c ", p);
				p--;
			}
			else
				printf("  ");
		printf("\n");
	}
	return (0);
}
