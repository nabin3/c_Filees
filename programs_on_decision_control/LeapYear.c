        // check a year is leapyear or not
#include<stdio.h>
int main()
    {
        int y;
        printf("Enter the year :\n");
        scanf("%d", &y);
        if(y % 4)
            printf("\n not a leapyear");
        else if(y % 100)                    
            printf("\n leap year");
        else if(y % 400)
            printf("\n not a leapyear");
        else
            printf("\n leapyear");
        return (0);
    }