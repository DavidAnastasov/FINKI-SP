#include "stdio.h"
#include "ctype.h"
#include "string.h"

int isSamoglaska(char c)
{
    char lc = tolower(c);
    return (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u');
}

int calculateSamoglaski(char *line)
{
    int brojac = 0;

    for (int i = 0; i < strlen(line); i++)
    {
        char c = line[i];

        if (isSamoglaska(c))
            brojac++;
    }

    return brojac;
}

int main()
{

    FILE *f = fopen("data/datoteki/7.txt", "r");

    int brojac_samoglaski = 0;
    int brojac_linii = 0;

    char line[100];
    while (fgets(line, 100, f) != NULL)
    {
        int samoglaski = calculateSamoglaski(line);
        brojac_samoglaski += samoglaski;

        if (samoglaski > 10)
        {
            brojac_linii++;
        }
    }

    printf("Vkupno %d reda imaat povekje od 10 samoglaski.\n", brojac_linii);
    printf("Vo datotekata ima vkupno %d samoglaski.", brojac_samoglaski);

    fclose(f);

    return 0;
}