			// print prime numbers in a given range
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter lower and upper limit\n");
	scanf("%d %d", &a,&b);
	while(a <= b)
	{
		for(i = 2; i <= a - 1; i++)
			if(a % i == 0)
				break;
		if(i == a)
			printf("\n %d", a);		
		a++;
	}
	return (0);
}

