		// print all armstrong number under 1000
#include<stdio.h>
int main()
{
	int num, i,x,r;
	printf("Armstrong numbers are \n");
	for(i = 1; i <= 10000; i++)
	{
		num = 0;
		x = i;
		while(x != 0)
		{
			r = x % 10;
			num = num + r*r*r;
			x /= 10;
		}
		if(num == i)
			printf("%5d", i);
	}
	return (0);
}
