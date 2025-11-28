#include <stdio.h>
#include <stdlib.h>
int main()
{
  int age;
  printf("Enter your Age:");
  scanf("%d",&age);
  if (age > 18){
    puts("Eligible!");
  }
  else {
    puts("Not Eligible");
  }
}