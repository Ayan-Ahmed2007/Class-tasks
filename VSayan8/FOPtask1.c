#include <stdio.h>
int main()
{
    int i=1;
    int n=0;
    while (i <= 5)
    {
        printf("Enter subject %d Marks=",i);
        scanf("%d",&n);
        i++;
    }
    printf("\n**********exit**********");
}