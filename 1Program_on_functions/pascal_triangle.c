		// Write a function to print Pascal triangle

#include<stdio.h>

long fact(int a)
{
	long f = 1;
	int i = 1;
	while(i <= a)
	{
		f *= i;
		i++;
	}
	return f;
}


long combi(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}

void pas_tri(int ro)
{
	for(int i = 1; i <= ro; i++)
	{
		int k = 1;
		int p = i - 1;
		int q = p;
		for(int j = 1; j <= ro * 2 - 1; j++)
		{
			if(j >= ro + 1 - i && j <= ro - 1 + i && k == 1)
			{
				printf("%ld", combi(p, q));
				q--;
				k = 0;
			}
			else
			{
				printf(" ");
				k = 1;
			}
		}	
		printf("\n");
	}
}

int main()
{
	int row;
	printf("How many rows are there in your pascal triangle ");
	scanf("%d", &row);
	pas_tri(row);
	return 0;
}

