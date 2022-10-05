            //check odd-even without % and bitwise operaor
#include<stdio.h>
int main()
    {
        int a;
        printf("Enter number \n");
        scanf("%d", &a);
        if(a - 2 * (a / 2))                                // remainder = dividend - divisor * quitent;
            printf("\n number is odd");     
        else
            printf("\n number is even");   
        return (0);
    }