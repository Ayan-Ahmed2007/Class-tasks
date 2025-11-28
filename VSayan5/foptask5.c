#include <stdio.h>
int main ()
{
    int x,n,sum;
    printf("Which Multiplication table do you want?=");
    scanf("%d",&x);

    for (n=1;n<=10;n++)
    {
       printf("%d x %d = %d\n",x,n,x*n);
    }
   
}