#include <stdio.h>
#include <stdlib.h>
int main()
{
    int grad;
    printf("Enter your Percentage=");
    scanf("%d",&grad);

   if(grad >= 90){
        puts("A");
    }else{
        if(grad >= 80){
            puts("B");
        }else{
            if(grad >= 70){
                puts("C");
            }else{
                if(grad >= 60){
                    puts("D");
                }else{
                    puts("F");
                }
            }
        }
    }
    return 0;
}
