#include <stdio.h>
int main ()
{
    int n=5;
    for (int i=1;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for (int e=n-i+1;e<=n+i-1;e++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
         for(int s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for (int e=n-i+1;e<=n+i-1;e++)
        {
            printf("%d",n);
        }
        
        puts("");
    }
}
