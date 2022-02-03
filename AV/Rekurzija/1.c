// Факториел

#include "stdio.h"

long f(int broj)
{
    if (broj == 1)
        return 1;

    return broj * f(broj - 1);
}

int main()
{
    int broj;
    scanf("%d", &broj);

    printf("%ld", f(broj));
    return 0;
}