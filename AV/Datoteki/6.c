#include "stdio.h"

int main()
{

    FILE *f_in = fopen("data/datoteki/6_in.txt", "r");
    FILE *f_out = fopen("data/datoteki/6_out.txt", "w");

    int cols, rows;
    fscanf(f_in, "%d %d", &cols, &rows);

    float matrica[100][100];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            fscanf(f_in, "%f", &matrica[i][j]);
        }
    }

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            fprintf(f_out, "%.1f ", matrica[j][i]);
        }

        fprintf(f_out, "\n");
    }

    fclose(f_in);
    fclose(f_out);

    return 0;
}