#include <stdio.h>
int main ()
{
    int number=2;
    int sum=0;
    while (number <= 35)
    {
        
        if (number % 2 == 0)
        {
            sum = sum + number;
        }
        number++;
        
    }
    printf("The Sum of Even Numbers from 2 to 35 is = %d",sum);
}