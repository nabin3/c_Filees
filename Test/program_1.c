//Swapping of two Integers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter two numbers you want to swap \n");
    scanf("%d %d",&a,&b);
    //swapping
    c = a;
    a = b;
    b = c;
    printf("\n After swapping result will look like this: \n a = %d b = %d",a,b);
    return 0;
}