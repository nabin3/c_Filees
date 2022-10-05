		// print first n natural even numbers in reverse
	#include<stdio.h>
		int main()
			{
				int j,i,n;
				printf("enter limit\n");
				scanf("%d", &n);
				j = 2*n - 1;
				i = n;
				printf("First %d natural even numbers are in reverse:\n", n);
				do
				{
				  if(j % 2 == 0)
				  { 
					  printf("%3d",j); 
				 	  i--;
				  } 
				  j--;
				}while(i > 0);
				return (0);
			}

				  
				
				    
