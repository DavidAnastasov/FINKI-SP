// Да се напишат следните функции за пребарување во низа:
// Линеарно пребарување
// Бинарно пребарување

// Потоа да се напише главна програма во која ќе се пополнува низа со броевите од 1 до 1 000 000,
// а потоа се генерира случаен број во овој опсег чија што позиција треба да се
// пронајде со повикување на двете функции за пребарување.

#include "stdio.h"

int linearSeach(int *niza, int n, int number)
{
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (niza[i] == number)
        {
            index = i;
            break;
        }
    }

    return index;
}

int binarySearch(int *niza, int n, int number)
{
    // Sort first
    int start = 0;
    int end = n - 1;

    int index = -1;

    while (start <= end)
    {
        int middle = (start + end) / 2;
        if (niza[middle] == number)
        {
            index = middle;
            break;
        }
        else if (niza[middle] > number)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }

    return index;
}

int main()
{
    int niza[] = {2, 3, 1, 4, 7, 12, 7, 9, 1};

    int linearIndex = linearSeach(niza, 9, 4);
    int binaryIndex = binarySearch(niza, 9, 4);

    printf("%d %d", linearIndex, binaryIndex);

    return 0;
}