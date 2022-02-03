// Да се најде следниот прост број од тој што е внесен

#include "stdio.h"

int isProst(int max, int broj)
{
    if (broj == max)
        return 1;

    if (max % broj == 0)
        return 0;

    return isProst(max, broj + 1);
}

int sledenProst(int broj)
{
    return isProst(broj, 2) ? broj : sledenProst(broj + 1);
}

int main()
{
    int broj;
    scanf("%d", &broj);

    int sleden = sledenProst(broj + 1);

    printf("%d\n", sleden);
    printf("%d - %d = %d\n", sleden, broj, sleden - broj);
    return 0;
}