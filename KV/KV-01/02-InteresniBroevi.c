// Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
// Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
// Од тастатура се внесува природен број n ( n > 9).
// Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
// Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

// For example:
// Input	Result
// 5        Brojot ne e validen

#include <stdio.h>
#include <math.h>

int getBrojNaCifri(int broj)
{
    int brojNaCifri = 0;

    while (broj > 0)
    {
        broj = broj / 10;
        brojNaCifri++;
    }

    return brojNaCifri;
}

int getCifraAtPosition(int broj, int position)
{
    int cifra;
    int brojac = getBrojNaCifri(broj) - 1;

    while (broj > 0 && brojac >= position)
    {
        cifra = broj % 10;
        broj = broj / 10;
        brojac--;
    }

    return cifra;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 9)
    {
        printf("Brojot ne e validen");
        return 0;
    }

    int najgolem = 0;

    for (int i = 10; i < n; i++)
    {
        int brojNaCifri = getBrojNaCifri(i);

        int obratenBroj = 0;
        for (int j = 0; j < ceil(brojNaCifri); j++)
        {
            int segasnaCifra = getCifraAtPosition(i, j);
            obratenBroj += segasnaCifra * pow(10, j);
        }

        if (obratenBroj % brojNaCifri == 0)
            najgolem = i;
    }

    printf("%d\n", najgolem);

    return 0;
}