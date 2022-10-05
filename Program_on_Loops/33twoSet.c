		// print n positive numbers with two bits set
/*#include<stdio.h>
int main()
{
	int a,x = 3,y,r,count;
	printf("Enter a number\n");
	scanf("%d", &a);
	while(a)
	{	y = x;
		count = 0;
		while(y)
		{
			r = y % 2;
			if(r == 1)
				count++;
			y /= 2;
		}
		if(count == 2)
		{	a--;
		        printf(" %d", x);
		}
		x++;
	}
	return (0);
}*/


#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number\n");
	scanf("%d", &n);
	for(i = 2; n; i *= 2)
		for(j = 1; j < i; j *= 2)
		{
			printf(" %d", i + j);
			n--;
			if(n == 0)
				break;
		}
	return (0);
}


