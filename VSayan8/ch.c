#include <stdio.h>

int main(void)
{
    int index = 0, spc = 0, n = 0;
    char str[] = "This is the best way to waste time";

    while (str[index] != '\0')
    {
        if (str[index] == 32 && spc - n == 0)
        {
            spc++;
            index = -1;
            printf("\n");
            n = 0;
        }
        else
        {
            if (str[index] == 32)
            {
                n++;
            }
            printf("%c", str[index]);
        }
        index++;
    }
}