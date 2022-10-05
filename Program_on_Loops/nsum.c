		//print sum of n natural numbers
	#include<stdio.h>
	int main()
	{
		int i,n,s = 0;
		printf("Enter how many numbers you want to add \n");
		scanf("%d", &n);
		for(i = 1;i <= n;i++)
			s = s + i;
		printf("Sum of %d  natural numbers is = %4d ", n,s);
	        return (0);
	}	
