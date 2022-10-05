//calculation of area of a Circle
#include<stdio.h>
int main()
    {
        float r,a;
        printf("Enter radious of a circle \n");
        scanf("%f", &r);
        a = 3.14 * r * r;
        printf("\nArea of circle = %f",a);
        return (0);
    }