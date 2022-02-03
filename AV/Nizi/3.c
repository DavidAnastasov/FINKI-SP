#include "stdio.h"

int main()
{
    int niza1[100];
    int niza2[100];

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza2[i]);
    }

    int dotProduct = 0;
    for (int i = 0; i < n; i++)
    {
        dotProduct += niza1[i] * niza2[i];
    }

    printf("%d", dotProduct);

    return 0;
}