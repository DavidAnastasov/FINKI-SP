// За даден број, проверете дали е 7-цифрен и ако е,
// испечате ги во посебен ред секој од неговите цифри почнувајќи од првата,
// а потоа повторно во посебен ред нивната сума и производ.

// Ако бројот не е 7 цифрен само испечатете "Vneseniot broj ne e 7 cifren!".

#include "stdio.h"
#include "math.h"

int main()
{
    int broj;
    scanf("%d", &broj);

    int broj_na_cifri = 0;
    int temp = broj;
    while (temp > 0)
    {
        temp /= 10;
        broj_na_cifri++;
    }

    if (broj_na_cifri == 7)
    {
        int suma = 0;
        int proizvod = 1;

        while (broj_na_cifri > 0)
        {
            int ratio = pow(10, --broj_na_cifri);

            int cifra = broj / ratio;
            printf("%d\n", cifra);

            suma += cifra;
            proizvod *= cifra;

            broj %= ratio;
        }

        printf("%d\n", suma);
        printf("%d\n", proizvod);
    }
    else
    {
        printf("Vneseniot broj ne e 7 cifren!");
    }

    return 0;
}