        //even-odd
    #include<stdio.h>
    int main()
        {
            int a;
            printf("\nEnter number\n");
            scanf("%d", &a);
            if(a % 2)
                printf("odd");
            else
                printf("even");
            return (0);
        }