      // check even-odd without using % operator
#include<stdio.h>
int main()
    {
        int a;
        printf("Enter number \n");
        scanf("%d", &a);
        if(a & 1)
            printf("\n number is odd");     // every odd number has 1 in it's last bit 
        else
            printf("\n number is even");    // every even number has 0 in it's last bit
        return (0);
    }
