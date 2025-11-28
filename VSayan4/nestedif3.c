#include <stdio.h>
#include <string.h>
int main ()
{
   int amount;
   int member;
   printf("Enter the purchase amount: ");
   scanf("%d",&amount);
   printf("Do you have a membership status: ");
   scanf("%d",&member);

   if (amount>=5000)
   {
    if (member==1)
    {
        printf("You get 20 %% discount");
    }
    else 
    {
        printf("You get 10 %% discount");
    }
   }
   else 
   {
    printf("No discount");
   }
}