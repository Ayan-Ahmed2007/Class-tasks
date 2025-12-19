#include <stdio.h>
#include <string.h>
int main ()
{
    char name[] = "Ayan Ahmed";
    char fathername[] = "Shahzad Haroon";
    printf("%d",strlen(name));

    strcpy(name,fathername);
    printf("\n after copy = %s",name);
}