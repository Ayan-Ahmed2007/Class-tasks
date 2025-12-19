#include <stdio.h>
int main ()
{
    char phrase[] = "an apple a day keeps the doctor away";
    int a=0;
    for(a=0;phrase[a] != '\0';a++)
    {
        if(phrase[a] == 'a')
        {
            printf("%c",phrase[a]-32);
        }
        else 
        {
            printf("%c",phrase[a]);
        }
    }    

}