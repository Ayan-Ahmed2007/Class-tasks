#include <stdio.h>
int main ()
{
    int arr[]={2,4,5,7,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int x=1; x<=size; x++)
    {
        printf("The Address of %d is = %p\n",arr[x],&arr[x]);
    }
}