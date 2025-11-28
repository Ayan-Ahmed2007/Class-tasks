#include <stdio.h>
int main ()
{
  int sum,num;

  for (num=1;num<=10;num++)
  {
    printf("\n%d",num);
    sum=sum+num;
  }
  printf("\nThe Sum of all the Number is :%d",sum);
}