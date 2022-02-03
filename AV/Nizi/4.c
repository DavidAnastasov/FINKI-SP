// Да се најде дали една низа е строго растечка, строго опаѓачка или ниту едно

#include "stdio.h"

int main()
{
    int n;
    scanf("%d", &n);

    int niza[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }

    int rastecka = 1;
    int opagjacka = 1;
    for (int i = 1; i < n; i++)
    {
        if (niza[i] <= niza[i - 1])
            rastecka = 0;

        if (niza[i] >= niza[i - 1])
            opagjacka = 0;
    }

    if (rastecka)
    {
        printf("Nizata e rastecka");
    }
    else if (opagjacka)
    {
        printf("Nizata e opagjacka");
    }
    else
    {
        printf("Nizata ne e nitu rastecka nitu opagjacka");
    }

    return 0;
}