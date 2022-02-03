// Да се избришат дупликати од една низа

#include "stdio.h"

int main()
{
    int n;
    scanf("%d", &n);

    int niza[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int set[100];
    int brojac_set = 0;

    for (int i = 0; i < n; i++)
    {
        int broj = niza[i];

        int unique = 1;

        for (int j = 0; j < brojac_set; j++)
        {
            if (i == j)
                continue;

            if (broj == set[j])
            {
                unique = 0;
                break;
            }
        }

        if (unique)
        {
            set[brojac_set++] = broj;
        }
    }

    for (int i = 0; i < brojac_set; i++)
    {
        printf("%d ", set[i]);
    }

    return 0;
}