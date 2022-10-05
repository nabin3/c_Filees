		//print n natural numbers in reverse order
   
    #include<stdio.h>
    int main()
	{
	   int n,i;
	   printf("Enter your desired limit:\n");
	   scanf("%d", &n);
	   printf("\n");
	   for(i = n-1;i >= 0;i--)
		printf("%2d", i);
	   return (0);
	}
