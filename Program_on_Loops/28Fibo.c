		// print first n terms of fibonacci series
#include<stdio.h>
int main()
{
	int a,f = -1,s = 1,sum =0;
	printf("Enter term numbers\n");
	scanf("%d", &a);
	for(int i = 1; i <= a; i++)
		{
			sum = f + s;
			f = s;
			s = sum;
			printf("%d ", sum);
		}	
	return (0);
}

