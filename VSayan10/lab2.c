#include <stdio.h>
int main ()
{
    char name[] = "AYAN AHMED";
    int a=0;
    for(int a=0; name[a] != '\0';a++)
    {
        if(name[a] != 32)
        {
            printf("%c",name[a]+32);
        }
        else 
        {
            printf(" ");
        }
    }
}