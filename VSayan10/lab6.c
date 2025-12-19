#include <stdio.h>
#include <string.h>
int main ()
{
    char name[] = "Ayan Ahmed";
    char fathername[] = "Shahzad Haroon";
    printf("%d",strlen(name));

    if(strcmp(name,fathername) == 0)
    {
        printf("\nStrings are same");
    }
    else 
    {
        printf("\nString are different");
    }
    
}