#include <stdio.h>
float perc(float num1)
{
    int total=1100;
    float perc = (num1*100)/total;
    return perc;
}
int main ()
{
    int a=0;
    printf("Enter Your Total Marks=");
    scanf("%d",&a);
    printf("Your Percentage is %.2f%%",perc(a));
}