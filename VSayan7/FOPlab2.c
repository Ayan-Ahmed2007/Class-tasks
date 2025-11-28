#include <stdio.h>
int main ()
{
    int arr[] = {34,56,67,42,65,59,34,76,23,89};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("display array element:\n");
    for(int index=0;index<size;index++)
    {
        printf("%d\n",arr[index]);
    }
}