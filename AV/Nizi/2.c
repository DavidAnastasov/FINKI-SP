#include "stdio.h"

int main()
{
    int niza[100];

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int suma_parni = 0;
    int suma_neparni = 0;

    for (int i = 0; i < n; i++)
    {
        if (niza[i] % 2 == 0)
        {
            suma_parni++;
        }
        else
        {
            suma_neparni++;
        }
    }

    printf("Suma parni: %d\n", suma_parni);
    printf("Suma neparni: %d\n", suma_neparni);
    printf("Soodnost parni/neparni: %.2f\n", (float)suma_parni / suma_neparni);

    return 0;
}