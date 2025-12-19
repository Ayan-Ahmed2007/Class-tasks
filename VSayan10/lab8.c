#include <stdio.h>
#include <string.h>
int main ()
{
    char str[]= "level";
    int len=strlen(str);
    int a;
    int flag=1;
    for(a=0;a<len/2;a++)
    {
        if(str[a] != str[len-a-1])
        {
            flag=0;
        }
    }
    if (flag==0)
    {
        printf("No Palindrome");
    }
    else 
    {
        printf("Palindrome");
    }
}