#include <stdio.h>
int main ()
{
    int arr[] = {34,45,56,43,12,78,65,97,76,32};
    int i=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int targetvalue=0;

    printf("Enter the value you want to search in the array:");
    scanf("%d",&targetvalue);
    int count=0;
    printf("Display array elements:");
    for(int i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
    for (int i=0;i<size;i++)
    {if (arr[i] == targetvalue)
    {
        printf("\nThe value found is=%d",i);
        count++;
        break;
    }
    }
    if (count == 0)
    {
        printf("\nThe value is not found");
    }
}