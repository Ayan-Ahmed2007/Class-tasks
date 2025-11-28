#include <stdio.h>
int main()
{
    int student=1,result=-1,passes=0,failures=0;
    while(result != 0)
    {
        printf("%s","Enter result (1=pass,2=fail):");
        scanf("%d",&result);
        
        if (result == 1){
            passes=passes + 1;
        }
        else{  if (failures == 2){
            failures = failures + 1;
        }
        
    }
    student = student + 1;
}
    printf("Passed %d\n",passes);
    printf("Failed %d\n",failures);

}