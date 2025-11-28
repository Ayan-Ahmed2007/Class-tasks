#include <stdio.h>
int main()
{
    int num1,num2,sum,sub,multi,div,rem ;
    
    printf("Enter your number:");
    scanf("%d", &num1);

    printf("Enter your number:");
    scanf("%d",&num2);

    sum= num1 + num2;
    printf("The sum of two numbers is:%d\n",sum);
    
    sub= num1 - num2;
    printf("the subraction of the two numbers is:%d\n",sub);
    
    multi= num1 * num2;
    printf("the multiplication of the two numbers is:%d\n",multi);

    div= num1 / num2;
    printf("the division of the two numbers is:%d\n",div);
    
    rem= num1 % num2;
    printf("The remainder of the two numbers is:%d\n",rem);
    return 0;
}