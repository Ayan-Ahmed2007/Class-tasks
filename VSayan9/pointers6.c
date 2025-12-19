#include <stdio.h>
int main ()
{
    int arr[] = {34,56,67,42,65,59,34,76,23,89,92};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("Sum of array elements are=%d",sum);
}
