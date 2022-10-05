#include<stdio.h>
int main()
{
	int i, j, sum = 0, k, n;
        printf("Enetr number of terms ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		k = 0;
		for(j = 1; j <= i; j++)
			k = k + j;	
		sum = sum + k;
	}
	printf("Sum = %d", sum);
	return (0);
}
