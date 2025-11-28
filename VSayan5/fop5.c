#include <stdio.h>
int main ()
{
    int n,multi=1;
    for (n=1;n<=10;n++)
    {
      multi=1;
      for(int c=1;c<=4;c++)
      {
        printf("%d\t",n*multi);
        multi*=10;
      }
        printf("\n");
    }


}