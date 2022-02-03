// Да се ротира една низа на десно за m елементи

#include "stdio.h"

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int niza[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    // In:  1 2 3 4 5 6 7
    // Out: 6 7 1 2 3 4 5

    for (int i = n - 1; i >= m; i--)
    {
        for (int j = i - m + 1; j <= i; j++)
        {
            int x = niza[j];
            niza[j] = niza[j - 1];
            niza[j - 1] = x;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}