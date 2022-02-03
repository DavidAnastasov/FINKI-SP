// Да се пресмета збирот на сите цифри од еден број

#include "stdio.h"

int zbirNaCifri(int broj)
{
    if (broj == 0)
    {
        return 0;
    }

    return broj % 10 + (zbirNaCifri(broj / 10));
}

int main()
{
    int broj;
    scanf("%d", &broj);

    printf("%d", zbirNaCifri(broj));

    return 0;
}