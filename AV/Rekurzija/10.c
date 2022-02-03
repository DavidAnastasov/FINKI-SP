// Да се најде најголем елемент во низа

#include "stdio.h"

int najgolem(int *niza, int n, int max)
{
    if (n == 0)
        return max;

    return najgolem(
        niza,
        n - 1,
        niza[n - 1] > max ? niza[n - 1] : max);
}

int main()
{
    int n;
    scanf("%d", &n);

    int niza[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int result = najgolem(niza, n, niza[0]);
    printf("%d", result);

    return 0;
}