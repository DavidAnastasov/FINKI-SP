// Да се пресмета најголем заеднички делител на броеви од една низа

#include "stdio.h"

int nzd(int n, int m)
{
    if (m == 0)
    {
        return n;
    }

    return nzd(m, n % m);
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

    int result = nzd(niza[0], niza[1]);

    for (int i = 2; i < n; i++)
    {
        result = nzd(result, niza[i]);
    }

    printf("%d", result);

    return 0;
}