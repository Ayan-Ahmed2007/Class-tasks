#include <stdio.h>
int main ()
{
    int a,b,sum;
    printf("Enter Number A: ");
    scanf("%d",&a);
    printf("Enter Number B: ");
    scanf("%d",&b);

    if (a>b){
        sum = a+b;
        printf("The Addition of these two numbers are:%d ",sum);
    }
    else {
        sum=a-b;
        printf("The Difference of these two numbers are:%d ",sum);
    }
}