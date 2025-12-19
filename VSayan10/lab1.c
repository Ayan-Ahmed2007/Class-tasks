#include <stdio.h>
int main ()
{
    char arr[] = "ali ahmed";
    int a=0 , count=0;
    for (a=0;arr[a] != '\0';a++)
    {
        count++;
        printf("%c",arr[a]);
    }
    printf("\nThe total elements in the string are= %d",count);
}