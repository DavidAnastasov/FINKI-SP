// Збир на низа од елементи рекурзивно

// Да се најде НЗС на низа од броеви

#include "stdio.h"

int sum(int* niza, int n)
{
    if (n == 1)
        return niza[0];

    return niza[n - 1] + sum(niza, n-1);
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

    int result = sum(niza, n);
    printf("%d", result);

    return 0;
}