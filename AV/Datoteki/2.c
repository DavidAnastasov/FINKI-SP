#include "stdio.h"

int main()
{
    FILE *f = fopen("test.txt", "r");

    char c;
    while ((c = fgetc(f)) != EOF)
    {
        printf("%c", c);
    }

    fclose(f);

    return 0;
}