#include <stdio.h>
#include <string.h>
int quiz()
{
    int q1, q2, q3, q4, q5,user=-1,score=0;
    while (user != 0)
    {
    printf("If you want to exit, press 0\n");
    printf("What is 9x7=");
    scanf("%d", &q1);
    if (q1 == 63)
    {
        score++;
        printf("The Answer is correct\n");
    }
    else 
    {
        printf("The Answer is wrong\n");
    }
    printf("What is 23+90=");
    scanf("%d", &q2);
    if (q2 == 113)
    {
        score++;
        printf("The Answer is correct\n");
    }
    else 
    {
        printf("The Answer is wrong\n");
    }
    printf("What is 24/4=");
    scanf("%d", &q3);
    if (q3 == 6)
    {
        score++;
        printf("The Answer is correct\n");
    }
    else 
    {
        printf("The Answer is wrong\n");
    }
    printf("What is 234-78=");
    scanf("%d", &q4);
    if (q4 == 156)
    {
        score++;
        printf("The Answer is correct\n");
    }
    else 
    {
        printf("The Answer is wrong\n");
    }
    printf("What is 54+7=");
    scanf("%d", &q5);
    if (q5 == 61)
    {
        score++;
        printf("The Answer is correct\n");
    }
    else 
    {
        printf("The Answer is wrong\n");
    }
    printf("Your total score is %d\n",score);
    break;
    }
}
int main()
{
        quiz();
        char ch[] = "";
        while (1)
        {
            printf("Do you want to attempt the quiz again?=");
            scanf("%s", ch);
            if (strcmp(ch, "Yes"))
            {
                break;
            }
            else if (strcmp(ch, "No"))
            {
                quiz();
            }
        }
    
}