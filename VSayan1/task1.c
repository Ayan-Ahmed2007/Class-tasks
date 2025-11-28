#include <stdio.h>
int main()
{
    int num1,num2,num3,sum,avg,multi ;
    printf("Enter the first number=");
    scanf("%d",&num1);
    
    printf("Enter the second number=");
    scanf("%d",&num2);
    
    printf("Enter the third number=");
    scanf("%d",&num3);

    sum= num1 + num2 + num3;
    printf("The sum of the three numbers are=%d\n",sum);

    avg= num1 + num2 + num3 / 3;
    printf("The average of the three numbers are=%d\n",avg);

    multi= num1 * num2 * num3;
    printf("The Product of the three numbers are=%d\n",multi);

    if (num1>num2 && num1>num3){
        printf("%d is the highest value\n",num1);
    }
    else if (num2>num1 && num2>num3){
        printf("%d is the highest value\n",num2);
    }
    else {
        printf("%d is the highest value\n",num3);
    }

    if (num1<num2 && num1<num3){
        printf("%d is the smallest value\n",num1);
    }
    else if (num2<num1 && num2<num3){
        printf("%d is the smallest value\n",num2);
    }
    else {
        printf("%d is the smallest value\n",num3);
    }

}