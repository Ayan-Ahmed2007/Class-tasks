#include <stdio.h>
int main (void)
{
    int num,n, div=2, cnt;

    for (n=2; n<=100; n++)
    {
        num = n;
        div=2;
        cnt=0;
        printf("%d : ",num);
    while(num != 1)
    {
        if (num % div ==0 )
        {
            num /= div;
            printf("%d ",div);
            cnt++;
        }
        else {
            div++;
        }
    }
    if (cnt == 1)
        {
            printf("\tPrime Number");
        }
    puts("");
    
    } 
}