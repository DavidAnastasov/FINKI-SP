// Дали две низи се еднакви

#include "stdio.h"

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 != n2)
    {
        printf("Nizinite ne se ednakvi");
        return 0;
    }

    int niza1[100], niza2[100];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &niza1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &niza2[i]);
    }

    int isti = 1;
    for (int i = 0; i < n1; i++)
    {
        if (niza1[i] != niza2[i])
        {
            isti = 0;
            break;
        }
    }

    if (isti)
    {
        printf("Isti");
    }
    else
    {
        printf("Razlicni");
    }

    return 0;
}