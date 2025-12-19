#include <stdio.h>
int square(int *a)
{
    return *a * *a;
}
int main()
{
   int a=0;
   printf("Type the number which u want the square for=");
   scanf("%d",&a);
   printf("The Value is %d",square(&a));
}