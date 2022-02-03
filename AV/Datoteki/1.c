#include "stdio.h"

int main()
{
    FILE *f = fopen("test.txt", "r");

    char line[100];
    while (fgets(line, 100, f) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        puts(line);
    }

    fclose(f);

    return 0;
}