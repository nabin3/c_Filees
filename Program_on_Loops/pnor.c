			// print n natural odd number in reverse order
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter limit:\n");
	scanf("%d", &n);
	i = n;
	j = 2*n;
	printf("First %d natural numbers are:\n", n);
	do{
		if(j % 2)
		{
			printf("%3d", j);
			i--;
		}
		j--;
	}while(i > 0);
	return (0);
}

