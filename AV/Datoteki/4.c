#include "stdio.h"
#include "ctype.h"
#include "string.h"

int isSamoglaska(char c)
{
    char lc = tolower(c);
    return (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u');
}

int main()
{
    FILE *f = fopen("data/datoteki/4.txt", "r");

    int brojac_samoglaski = 0;
    int brojac_soglaski = 0;

    char c;
    while ((c = fgetc(f)) != EOF)
    {
        if (isalpha(c) == 0)
            continue;

        if (isSamoglaska(c))
        {
            brojac_samoglaski++;
        }
        else
        {
            brojac_soglaski++;
        }
    }

    printf("Odnos samoglaski soglaski: %d/%d = %.2f", brojac_samoglaski, brojac_soglaski, (float)brojac_samoglaski / brojac_soglaski);

    fclose(f);

    return 0;
}