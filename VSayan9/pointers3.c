#include <stdio.h>
int main()
{
    int a=5;
    printf("The Initial Value is %d",a);
    int *b=&a;
    *b = 10;
    printf("\nThe Updated Value is %d",a);
}