     //find greater between two numbers
#include<stdio.h>
int main()
    {
        int a,b;
        printf("Enter two numbers\n");
        scanf("%d %d", &a,&b);
        printf("\n Greater number is %d", (a>b)?a:b);
        return (0);
    }