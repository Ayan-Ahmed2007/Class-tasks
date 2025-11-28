#include <stdio.h>
int main ()
{
    int amount,discount,total_amount;
    printf("Enter your Purchase amount: ");
    scanf("%d",&amount);

    if (amount>100)
    {
       discount = (amount*10)/100 ;
       printf("The Discounted Price is: %d",discount);
       total_amount= amount - discount;
       printf("\nThe Total Discounted Price will be:%d ",total_amount);

    }
    else 
    {
        printf("There will be no Discount");
    }

}