#include <stdio.h>
int swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main ()
{
    int a=10 , b=8;
    swap(&a,&b);
    printf("The Values now are a=%d and b=%d",a,b);
}