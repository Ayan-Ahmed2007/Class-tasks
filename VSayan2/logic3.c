#include <stdio.h>
int main (void)
{
int sum;    
for (int num=2; num<=100; num+=2){
    sum+=num;
} 
printf("Sum is %d",sum);
}