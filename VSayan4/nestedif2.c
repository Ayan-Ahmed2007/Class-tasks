#include <stdio.h>
#include <string.h>
int main ()
{
    int age;
    char vision[]="";
    printf("Enter your age=");
    scanf("%d",&age);
    printf("Enter if they pass/fail the vision test=");
    scanf("%s",vision);
    
    if (age>=18)
    {
      if(strcmp(vision,"passed") )
      {
        printf("You are eligible for a driving license");
      }
      else {
        printf("You must pass the vision test");
      }
    }
    else {
        printf("You are too young to apply");
    }
    
    

}