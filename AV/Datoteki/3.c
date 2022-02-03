#include "stdio.h"

int main()
{
    FILE *f = fopen("test.txt", "r");

    int words;
    fscanf(f, "%d", &words);

    printf("%d\n", words);

    for (int i = 0; i < words; i++)
    {
        char word[100];

        fscanf(f, "%s", word);
        puts(word);
    }

    fclose(f);

    return 0;
}