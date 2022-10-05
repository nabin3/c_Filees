		// print first n odd numbers
 #include<stdio.h>
 #include<stdlib.h>
	int main()
	    {
		 int i = 0,j = 0,n;
		 printf("Enter limit\n");
		 scanf("%d", &n);
		 printf("first %d natural Odd numbers are:\n", n);
		 while(1)
			{
				if(j%2)
				{
					printf("%3d", j);
					i++;
				}
				if(i == n)
					exit(0);
				j++;
			}
		 return (0);
	     }

