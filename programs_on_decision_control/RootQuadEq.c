     // find roots of quadratic equaton
#include<stdio.h>
#include<math.h>
int main()
    {
        int a,b,c,d;      // coefficient of x^2 ,x and constant number
        double x,y;       // sqrt take double type argument and return double type argumrnt;
        printf("Enter coefficients of x^2,x and constant numer \n");
        scanf("%d %d %d", &a,&b,&c);
        d = b*b - 4*a*c;
        if(d < 0)
            printf("\n roots are imaginary");
        if(d == 0)
            {
                printf("\n equal roots ");
                printf("%f", -b/(2.0*a));
            }
        if(d > 0)
            { 
                printf("\n roots are real and distinct");
                x = (-b + sqrt(d)) / (2 * a);
                y = (-b - sqrt(d)) / (2 * a);
                printf("%lf %lf", x,y);
            }
                
    }