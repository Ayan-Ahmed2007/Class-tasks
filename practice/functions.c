#include <stdio.h>
int sum (int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int  diff(int num1, int num2)
{
    int diff = num1 - num2;
    return diff;
}
int multi (int num1, int num2)
{
    int multi = num1 * num2;
    return multi;
}
float div(float num1, float num2)
{
    if (num1 && num2 == 0)
    {
        return -1;
    }
    else
    {
        float div = num1 / num2;
        return div;
    }
}

int main ()
{
    int a=0,b=0;
   printf("Enter Your  first Number=");
   scanf("%d",&a);
   printf("Enter your second Number=");
   scanf("%d",&b);
   printf("%d\n",sum(a,b));
   printf("%d\n",diff(a,b));
   printf("%d\n",multi(a,b));
   printf("%.2f\n",div(a,b));
}