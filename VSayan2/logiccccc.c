#include <stdio.h>
#include <string.h>
int main()
{
    int Shoesize=8;
    char color[6]="" ;
    printf("Enter your Shoesize=");
    scanf("%d",&Shoesize);
    printf("Enter your Shoecolor=");
    scanf("%s",&color);

    if (Shoesize == 8 && strcmp(color,"black") == 0)
    {
        printf("Shoe avalaible");
    }
    else 
    {
        printf("Shoes are not avalaible");
    }
    return 0;
}