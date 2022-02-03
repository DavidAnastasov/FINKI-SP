// Да се изброи колку пати во еден број се појавува цифрата 8
// Доколку до таа цифра 8 има уште една цифра 8, тие се рачунаат двојно
// 8818 = 4
// 8 = 1, 8 = 2, 1 =0, 8 = 1  => 4

#include "stdio.h"

int count8(int broj)
{
    if (broj == 0)
    {
        return 0;
    }

    if (broj % 10 == 8)
    {
        if (broj % 100 / 10 == 8)
        {
            return 3 + count8(broj / 100);
        }

        return 1 + count8(broj / 10);
    }

    return count8(broj / 10);
}

int main()
{
    int broj;
    scanf("%d", &broj);

    printf("%d", count8(broj));

    return 0;
}