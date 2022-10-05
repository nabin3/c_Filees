		// sum of digits of a given number
#include<stdio.h>
int main()
{
	int number, sum = 0, r;
	printf("Enter the number:\n");
	scanf("%d", &number);
	while(number != 0)
	{
		r = number % 10;
		sum += r;
		number /= 10;
	}
	printf("\n Sum of digits of this number is = %d", sum);
	return (0);
}
		
		
