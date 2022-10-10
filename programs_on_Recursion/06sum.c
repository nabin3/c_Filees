		// Write a recursive function to calculate sum of digits of a number
#include<stdio.h>

int sum(int n) {
	if (n == 0)
		return (0);
	return( n % 10 + sum(n / 10));
}

int main() {
	int num, res;
	printf("Enter the number\n");
	scanf("%d", &num);
	res = sum(num);
	printf("sum of digits of %d is = %d \n", num, res);
	return (0);
}
