#include <stdio.h>
void numbers(int *num1,int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main ()
{
    int a=0,b=0;
    printf("Enter a Number=");
    scanf("%d",&a);
    printf("Enter b Number=");
    scanf("%d",&b);
    numbers(&a,&b);
    printf("\nThe Numbers are now printed as a=%d b=%d",a,b);

}