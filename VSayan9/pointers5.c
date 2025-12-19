#include <stdio.h>
int main ()
{
    int a,b,c,d,e;
    printf("Enter First Number=");
    scanf("%d",&a);
    int *pa = &a;
    printf("Enter Second Number=");
    scanf("%d",&b);
    int *pb = &b;
    printf("Enter Third Number=");
    scanf("%d",&c);
    int *pc = &c;
    printf("Enter Fourth Number=");
    scanf("%d",&d);
    int *pd = &d;
    printf("Enter Fifth Number=");
    scanf("%d",&e);
    int *pe = &e;

    printf("The Numbers using pointers are printed as %d %d %d %d %d",*pa,*pb,*pc,*pd,*pe);
}