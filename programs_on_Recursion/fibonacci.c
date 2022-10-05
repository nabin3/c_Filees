		// write a recursive function to find n_th term of fibonacci seires
#include<stdio.h>

int fibo(int n)
{
	if(n == 1 || n == 2)
		return(1);
	return(fibo(n - 1) + fibo(n - 2));
}

int main()
{
	int fi;
	printf("Enter a number :");
	scanf("%d", &fi);
	printf("The %d_th term of fibonacci series is = %d\n", fi, fibo(fi));
	return(0);
}
