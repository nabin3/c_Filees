		// print prime factors of a given number
#include<stdio.h>
int main()
{
	/*int a,i,j,c = 1;
	printf("Enter the Number\n");
	scanf("%d", &a);
	for(i = 2; i <= a; i++)
	{
		if(a % i == 0)
		{
		    for(j = 2; j * j <= i; j++)
		    {
			if(i % j == 0)	
			{
				c = 0;
			       	break;	
			}
		    }
		    if(c)  
			printf("%4d", i); 
		}
	}*/
	int x,i;
	printf("Enter the number\n");
	scanf("%d", &x);
	for(i = 2; x > 1; i++) 
	while(x % i == 0)
	{
		printf("%d ", i);
		x /= i;
	}
	return (0);
}
