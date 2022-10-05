		// print first n natural even numbers
	#include<stdio.h>
	#include<stdlib.h>
		int main()
			{
				int j = 0,i = 0,n;
				printf("enter limit\n");
				scanf("%d", &n);
				printf("First %d natural even numbers are:\n", n);
				do
				{
				  if(j % 2 == 0)
				     {
					  printf("%3d",j);
				          i++;
				     }
				  j++;
				  if(i == n)
				     exit (0);
				}while(1);
				return (0);
			}

				  
				
				    
