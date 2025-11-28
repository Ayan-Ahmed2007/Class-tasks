#include <stdio.h>
int maximum(int w,int x,int y,int z);
int main ()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    printf("%s","Enter your numbers: ");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    printf("Maximum Number is:%d",maximum(num1,num2,num3,num4));
}
int maximum(int w,int x,int y,int z) 
{
    int max=w;
    if (x > max)
    {
        max=x;
    }
    if (y > max)
    {
        max=y;
    }
    if (z > max)
    {
        max=z;
    }
    return max;
}