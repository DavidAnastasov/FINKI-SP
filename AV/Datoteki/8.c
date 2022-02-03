#include "stdio.h"
#include "ctype.h"

int isValid(char *line)
{
    int max = 0;

    for (int i = 0; i < strlen(line); i++)
    {
        int brojac = 1;
        int bukva = tolower(line[i]);

        for (int j = i + 1; j < strlen(line); j++)
        {
            if (tolower(line[j]) == bukva)
            {
                brojac++;
            }
        }

        if (brojac > max)
        {
            max = brojac;
        }
    }

    return max > 2;
}

int main()
{
    FILE *f = fopen("data/datoteki/8.txt", "r");

    int brojac = 0;

    char line[100];
    while (fgets(line, 100, f) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        if (isValid(line))
        {
            puts(line);
            brojac++;
        }
    }

    printf("Vkupno %d zborovi.\n", brojac);

    fclose(f);

    return 0;
}