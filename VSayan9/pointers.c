#include <stdio.h>
int main ()
{
    int a=7;
    int *aptr = &a;
    printf("The Address of a is=%p\n the address of aptr=%p",&a,aptr);
    printf("\nThe Value of a is = %d\n  The value of aptr is= %d",a,*aptr);
}