#include <stdio.h>
int main ()
{
    int as,i;
    for (i=1;i<=7;i++)
    {
        printf("\n");
        for(as=1;as<=i;as++)
        {
            printf("*");
        }
    }
    for (i=7-1;i>=1;i--)
    {
        printf("\n");
        for(as=1;as<=i;as++)
        {
            printf("*");
        }
    }
}