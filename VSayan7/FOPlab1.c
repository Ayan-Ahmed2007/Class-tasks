#include <stdio.h>
int main ()
{
    int arr[] = {31,23,34,57,97,80,54};
    printf("%d\n",arr[4]);
    
    arr[2] = 400;
    printf("%d\n",arr[2]);

    printf("%d",arr[3]);
}