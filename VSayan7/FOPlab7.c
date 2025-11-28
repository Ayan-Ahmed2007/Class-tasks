#include <stdio.h>
int main ()
{
    char fullname[] = "Ayan Ahmed";
    int size = sizeof(fullname)/sizeof(fullname[0]);
    int spacecount=0;
    for (int i=0;i<size;i++)
    {
        if (fullname[i] == '\0')
        {
            spacecount++;
        }
    }
    printf("The Numbers of Spaces are: %d",spacecount);
}