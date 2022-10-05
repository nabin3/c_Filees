        //whether divisible by 5 or not
#include<stdio.h>
int main()
    {
        int a;
        printf("Enter the number\n");
        scanf("%d", &a);
        if(a % 5)
            printf("\n not divisible by 5 ");
        else
            printf("\n divisible by 5");
        return (0);
    }