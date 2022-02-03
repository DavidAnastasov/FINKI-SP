// Да се ротира низа на десно за еден елемент

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

    // In:  1 2 3 4 5 6 7
    // Out: 7 1 2 3 4 5 6

    for (int i = n - 1; i > 0; i--)
    {
        int x = niza[i];
        niza[i] = niza[i - 1];
        niza[i - 1] = x;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}