#include <stdio.h>
int main(void)
{
    FILE *cfptr = NULL;
    if ((cfptr = fopen("client.txt", "w")) == NULL)
    {
        puts("File cannot be opened");
    }
    else
    {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        int account = 0;      // account number
        char name[30] = "";   // account name
        double balance = 0.0; // account balance

        scanf("%d%29s%lf", &account, name, &balance);

        // write account, name and balance into file with fprintf
        while (!feof(stdin))
        {
            fprintf(cfptr, "%d %s %.2f\n", account, name, balance);
            printf("%s", "? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }

        fclose(cfptr); // fclose closes file
    }
}