#include "stdio.h"
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *f_in = fopen("data/datoteki/5.txt", "r");
    FILE *f_out = fopen("data/datoteki/5_izlez.txt", "w");

    char line[100];
    while (fgets(line, 100, f_in) != NULL)
    {
        fprintf(f_out, "%ld ", strlen(line));
        fputs(line, f_out);
    }

    fclose(f_in);
    fclose(f_out);

    return 0;
}