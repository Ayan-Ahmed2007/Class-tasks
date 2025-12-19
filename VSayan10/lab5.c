#include <stdio.h>
#include <string.h>
int main ()
{
    char name[] = "Ayan Ahmed";
    char fathername[] = "Shahzad Haroon";
    printf("%d",strlen(name));

    strcat(name,fathername);
    printf("\nnow name variable become after concatenation =%s",name);
}