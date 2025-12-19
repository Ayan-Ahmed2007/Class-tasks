#include <stdio.h>
int main()
{
    char name[] = "Ayan Ahmed";
    int a = 0;
    int vowelcount = 0;
    for (a = 0; name[a] != '\0'; a++)
    {
        if (name[a] == 'a' || name[a] == 'e' || name[a] == 'i' || name[a] == 'o' || name[a] == 'u' || name[a] == 'A' || name[a] == 'E' || name[a] == 'I' || name[a] == 'O' || name[a] == 'U')
        {
            vowelcount++;
        }
    }
    printf("Vowels are %d", vowelcount);
}