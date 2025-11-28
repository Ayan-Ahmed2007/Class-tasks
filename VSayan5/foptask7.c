#include <stdio.h>
int main ()
{
    int fac,num,sum=1;
    printf("Which factorial of number do you want?=");
    scanf("%d",&num);

    for (fac=num;fac>=1;fac--)
    {
      sum=sum*fac;
    }
    printf("The factorial of the number is %d",sum);
}