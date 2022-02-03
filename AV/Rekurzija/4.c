// Рекурентни релации

#include "stdio.h"

double r(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }

    return ((n - 1.0) / n) * r(n - 1) + (1.0 / n) * r(n - 2);
}

int main()
{
    int broj;
    scanf("%d", &broj);

    printf("%.3f", r(broj));

    return 0;
}