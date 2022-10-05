            // swap two numbers without third variable
    #include<stdio.h>
    int main()
        {   int a,b;
            printf("Enter two numbers :\n");
            scanf("%d %d", &a,&b);
            a = a + b;
            b = a - b;  //now b has value of a
            a = a - b;  //now a has value of b as b has value of a
            printf("After Swap %d %d", a,b);
            return (0);
        }