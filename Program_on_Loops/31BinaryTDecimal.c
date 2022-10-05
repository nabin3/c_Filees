			// binary to decimal
#include<stdio.h>
int bd(char a[])
{
	int i,d = 0;
	for(i = 0; a[i]; i++)
		if(a[i] == '0')
			d = d * 2;
		else
			d = d * 2 + 1;
	return (d);
}
int main()
{
	printf("%d", bd("101101"));
	return (0);
}

	
