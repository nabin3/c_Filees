#include<stdio.h>
int main()
{
	int i, j, k = 0, flag, p;
	for(i = 1; i <= 5; i++)
	{
		flag = 1;
		if(i % 2)
			k += 1;
		else
		{
			k--;
			k += i;
		}
		p = k;
		for(j = 1; j <= 9; j++)
		{
			if(j <= 2 * i - 1)
			{
				if(flag)
				{
					printf("%2d", p);
					if(i % 2)
					{
						p++;
						k++;
					}
					else
					{
						p--;
					}
				}
				else 
					printf(" *");
				flag = 1 - flag;
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	return (0);
}

