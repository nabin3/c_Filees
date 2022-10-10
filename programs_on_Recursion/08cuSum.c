	// Write a recursive function to calculate sum of cubes of first N natural numbers 
#include<stdio.h>

int cubeSum(int n) {
	if (n == 1)
		return (1);
	return ( (n * n * n) + cubeSum(n - 1) );
}

int main() {
	int n,s;
	printf("Enter upto how many number \n");
	scanf("%d", &n);
	s = cubeSum(n);
	printf("Result = %d\n", s);
	return (0);
}
