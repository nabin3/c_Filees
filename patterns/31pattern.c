#include<stdio.h>
int main()
{
	int i, j, k, num, n;
	char alpha;
	printf("Eneter row ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		k = 1;
		num = 1;
		alpha = 'A';
		for(j = 1; j <= 2 * n - 1; j++)
		{
			if(j >= n + 1 - i && j <= n - 1 + i)
			{
				if(k)
				{
					if( i % 2)
						printf("%d", num++);
					else
						printf("%c", alpha++);
				}
				else
					printf(" ");
				k = 1 - k;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}
