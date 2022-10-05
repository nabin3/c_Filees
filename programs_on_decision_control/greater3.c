            // greater among three numbers
    #include<stdio.h>
    int main()
        {
            int a,b,c;
            printf("Enter three numbers\n");
            scanf("%d %d %d", &a,&b,&c);
            /*if(a > b)
                if(a > c)
                    printf("large %d", a);
                else
                    printf("large %d", c);
            else
                if(b > c)
                    printf("large %d", b);
                else
                    printf("large %d", c);*/
            printf("\n larger number is %d", (a > b) ? (a > c ? a : c) : (b > c ? b : c));
            return (0);
        }