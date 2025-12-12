#include <stdio.h>
int main ()
{
    int password=0;
    int e;
    printf("Enter Your Password=");
    scanf("%d",&password);

    while (1)
    {
        printf("Enter your password again to see if it is correct=");
        scanf("%d",&e);
       if (e != password)
       {
        printf("The Password is not correct\n");
       }
       else if(e == password)
       {
        printf("The Password is correct\n");
        break;
       }
    }
}