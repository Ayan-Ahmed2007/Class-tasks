#include <stdio.h>
int main ()
{
    int count,as,space;
    for (count=1;count<=10;count++)
    {
        for(as=10;as>=count;as--)
        {
            printf("*");
        }
        printf("\n");
    }
}