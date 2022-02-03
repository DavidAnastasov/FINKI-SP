// Сума

#include "stdio.h"

long f(int broj)
{
    if (broj == 1)
        return 1;

    return broj * f(broj - 1);
}

long sum(int broj)
{
    if (broj == 1)
        return 1;

    return broj + sum(broj - 1);
}

long r(int broj)
{
    if (broj == 1)
        return 1;

    return f(sum(broj)) + r(broj - 1);
}

int main()
{
    int broj;
    scanf("%d", &broj);

    printf("%ld", r(broj));
    return 0;
}