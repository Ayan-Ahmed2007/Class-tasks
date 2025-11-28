#include <stdio.h>
int main (void)
{
    int num=100, div=2;
     while(num != 1)
     {
        if (num % div == 0)
        {
            num /= div;
            printf("%d",div);
        }
        else
        {
            div++;
        }
     }
}