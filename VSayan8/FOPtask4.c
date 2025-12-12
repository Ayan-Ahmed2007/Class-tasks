#include <stdio.h>
int main ()
{
    int number,i=0,sum=0;
    printf("Enter the natural number which you want to sum till at=");
    scanf("%d",&number);
    
    while (i != number)
    {
        i++;
        sum = sum + i;
    }
    printf("The total sum till %d is = %d",number,sum);
}