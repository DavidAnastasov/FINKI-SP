#include <stdio.h>
#include <ctype.h>
#include <string.h>

void wtf()
{
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != '#')
    {
        fputc(c, f);
    }
    fclose(f);
}

int isSpecialCharacter(int c)
{
    return c == ' ' || c == ',' || c == '?' || c == '"' || c == '\n' || c == '\'' || c == '-';
}

int countWords(char *line)
{
    int counter = 1;

    for (int i = 0; i < strlen(line) - 1; i++)
    {
        if (isSpecialCharacter(line[i]) && isSpecialCharacter(line[i + 1]) == 0)
            counter++;
    }

    return counter;
}

int countLetters(char *line)
{
    int counter = 0;

    for (int i = 0; i < strlen(line); i++)
    {
        if (isalnum(line[i]))
            counter++;
    }

    return counter;
}

int main()
{
    wtf();
    //vasiot kod tuka

    FILE *f = fopen("input.txt", "r");

    char line[100];
    while (fgets(line, 100, f))
    {
        int letters = countLetters(line);
        int words = countWords(line);
        printf("%d, %d: %s", letters, words, line);
    }

    fclose(f);

    return 0;
}
