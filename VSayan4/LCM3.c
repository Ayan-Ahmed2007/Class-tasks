#include <stdio.h>
int main ()
{
    int num1,count=0,max;
    
    for(count=0;count !=3;count++)
    {
    printf("Enter your number=");
    scanf("%d",&num1);
    
    if (num1>max){
       max=num1;
    }
    
    }
    printf("The maximum number is : %d",max);
   
}