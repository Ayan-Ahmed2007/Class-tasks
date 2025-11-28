#include <stdio.h>
int main ()
{
    int marks, attend;
    printf("Enter your marks=");
    scanf("%d",&marks);
    printf("Enter your attendance=");
    scanf("%d",&attend);
    
    if (marks>=80){
        if (attend>=75){
            printf("100 Percent Scholarship");
        }
        else {
            printf("50 Percent Scholarsship");
        }
    }
    else {
        printf("Not Eligible");
    }
}