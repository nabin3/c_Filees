		// reverse a number
#include<stdio.h>
#include<math.h>
int main()
{
	int num,rnum = 0,r;
	printf("Enter the number:\n");
	scanf("%d", &num);
	while(num != 0)
	{
		r = num % 10;
		rnum = rnum * 10 + r;
		num /= 10;
	}
	printf("\n The reverse number is %d", rnum);
	return (0);
}
