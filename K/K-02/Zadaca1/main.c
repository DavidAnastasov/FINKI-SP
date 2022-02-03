#include <stdio.h>
#include "math.h"

// 4
// 10
// 99
// 190
// 10100
// 5931
// 1232
// 999
// 1231
// 9999
// 1234567
// 2342421

int getBrojNaCifri(int number)
{
    int brojac = 0;

    while (number > 0)
    {
        number /= 10;
        brojac++;
    }

    return brojac;
}

int getCharacterAt(int number, int index)
{
    number /= pow(10, getBrojNaCifri(number) - index - 1);

    return number % 10;
}

int presmetajRazlicniCifri(int broj)
{
    int razlicni = 1;

    int golemina = getBrojNaCifri(broj);
    for (int i = 0; i < golemina; i++)
    {
        int broj_1 = getCharacterAt(broj, i);
        for (int j = i + 1; j < golemina; j++)
        {
            int broj_2 = getCharacterAt(broj, j);

            if (broj_1 != broj_2)
            {
                razlicni++;
            }
        }
    }

    return razlicni;
}

int main()
{

    // for (int i = 141; i < 12345; i += 141)
    // {
    //     int cifri = getBrojNaCifri(i);

    //     printf("%d: ", i);
    //     for (int j = 0; j < cifri; j++)
    //     {
    //         int cifra = getCharacterAt(i, j);

    //         printf("%d ", cifra);
    //     }

    //     printf("\n");
    // }

    int x;
    scanf("%d", &x);

    if (x < 1 || x > 10)
        return 0;

    int niza[100];

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        int razlicni = presmetajRazlicniCifri(niza[i]);
        printf("%d %d\n", niza[i], razlicni);

        if (razlicni == x)
        {
            // printf("%d\n", niza[i]);
        }
    }

    return 0;
}
