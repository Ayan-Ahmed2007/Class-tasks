#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    printf("Enter Your First Number=");
    scanf("%d", &a);
    int *pa = &a;

    printf("Enter Your Second Number=");
    scanf("%d", &b);
    int *pb = &b;

    if (*pa > *pb)
    {
        printf("The Greater Number is %d", *pa);
    }
    else if (*pb > *pa)
    {
        printf("The Greater Number is %d", *pb);
    }
}