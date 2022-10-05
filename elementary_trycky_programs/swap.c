            //swapping of two numbers
    #include<stdio.h>

    int main()
        {
            int a,b,c;
            printf("Enter two numbers:\n");
            scanf("%d %d", &a,&b);
            c = a;
            a = b;
            b = c;
            printf("\nAfter swap :\n %d %d",a,b);
            return (0);
        }