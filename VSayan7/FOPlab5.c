#include <stdio.h>
int main ()
{
    int s;
    
    printf("Input the length of Array you want=");
    scanf("%d",&s);

    int arr[s];
    printf("Enter your Numbers:");
    for (int i=0;i<s;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    printf("The Numbers of the Array are=\n");
    for (int i =0;i<s;i++)
    {
        printf("%d\n",arr[i]);
    }
}