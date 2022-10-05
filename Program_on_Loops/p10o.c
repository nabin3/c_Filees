		// print first 10 odd numbers
 #include<stdio.h>
 #include<stdlib.h>
	int main()
	    {
		 int i = 0,j = 0;
		 printf("first 10 natural Odd numbers are:\n");
		// scanf("%d", &n);
		 while(1)
			{
				if(j%2)
				{
					printf("%3d", j);
					i++;
				}
				if(i == 10)
					exit(0);
				j++;
			}
		 return (0);
	     }

