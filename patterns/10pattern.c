/*#include<stdio.h>
int main()
{
	int i,j,k = 1;
	for(i = 1; i <= 7; i++)
	{
		for(j = 1; j <= 7; j++)
		{
			if(j >= 5 - k && j <= 3 + k)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		i < 4? k++: k--;
	}
	return(0);
}*/

#include<stdio.h>
int main()
{
	int i,j,k = 0,r,n;
	printf("Enter row ");
	scanf("%d", &r);
	n = (r + 1) / 2;	
	for(i = 1; i <= r; i++)
	{
		if(r % 2)
			i <= n? k++: k--;
		else
		{
			if(i <= r / 2)
				k++;
			if(i > r / 2 + 1)
				k--;
		}
		for(j = 1; j <= r; j++)
		
			if(j >= n + 1 - k && j <= n - 1 + k)
				printf("*");
			else
				printf(" ");
		
		printf("\n");
	}
	return(0);
}
