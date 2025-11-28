#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks=");
    scanf("%d",&marks);

    if (marks>=80 && marks<100)
    {
        printf("A+ Grade");
    }
    else if (marks>=70 && marks<80)
    {
        printf("A Grade");
    }
    else if (marks>=60 && marks<70)
    {
        printf("B Grade");
    }
    else if (marks>=50 && marks<60)
    {
        printf("C Grade");
    }
    else if (marks>=46 && marks<50)
    {
        printf("D Grade");
    }
    else
    {
        printf("Failed");
    }
}