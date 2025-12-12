#include <stdio.h>
#include <string.h>

int main (void)
{
    int index=0,spc=0,n=0;
    char sentence [] = "This is the best way time to waste time";
    char line [sizeof(sentence)] = {0};
    while (sentence[index] != '\0')
    {
        line[index] = sentence[index];
        if(sentence[index] == 32)
        {
            printf("%s\n",line);
        }
        index++;
    }
    printf("%s",sentence);
    
}