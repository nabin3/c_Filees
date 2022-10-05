#include<stdio.h>
int main()
{
	int i , j , m = 0 , k , n =11 ;
	for( i = 1 ; i <= 21 ; i++ )
	{
		i <= n? m++: m--;
		k = m - 1;
		for( j = 1 ; j <= 21 ; j++ )
			if(j >= n + 1 - m && j <= n - 1 + m)
				printf("%d", j < n ? k++ % 10: k-- % 10);
			else
				printf(" ");
		printf("\n");
	}
	return (0);
}
