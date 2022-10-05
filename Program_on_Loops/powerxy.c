		// write a program to calculate x ^ y
#include<stdio.h>
int main()
{
	int x,y,exp;
	double pow = 1.0;
	printf("Enter base and exponent :\n");
	scanf("%d %d", &x,&y);
	exp = y;
	if(y > 0)
	{	while(y != 0)
		{
			pow *= x;
			y--;
		}
		printf("\n %d ^ %d is = %lf", x,exp,pow);
	}		
	else if(y == 0)
		printf("\n %d ^ %d is = %d", x,y,1);
	else
	{
		while(y != 0)
		{
			pow *= (1.0 / x);
			y++;
		}
		printf("\n %d ^ %d is = %.10f", x,exp,pow);
	}
	return (0);
}
