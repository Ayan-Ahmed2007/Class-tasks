#include <stdio.h>
int main(void) 
{
    char str[] = "i am student of bachelors of computer science";
    int index=0;   
    while (str[index] != '\0')
    {
        if (str[index] != 32)
        {
            printf("%c",str[index] - 32);
        }
        else {
            printf(" ");
        }
        index+=1;
    }
    index = 0;
    while (str[index] != '\0')
    {
        if (index == 0)
        {
            printf("\n%c",str[index] - 32);
        }
        else if (str[index] == 32)
        {
            printf("%c",str[index]);
        }
        else if  (str[index - 1] == 32)
        {
            printf("%c",str[index] - 32);
        }
        else 
        {
            printf("%c",str[index]);
        }
        index+=1;
    }
}