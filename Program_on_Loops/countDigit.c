		// count digit of a given number
#include<stdio.h>
int main()
{
	int number, c;
        printf("Enter a number\n");
	scanf("%d", &number);
	while(number != 0)
	{
		number /= 10;
		c++;
	}
	printf("\n This number has %d digits", c);
	return (0);
}	

