// Bubble sort

#include "stdio.h"

void bubbleSort(int *niza, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (niza[j] > niza[j + 1])
            {
                int temp = niza[j];
                niza[j] = niza[j + 1];
                niza[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int niza[] = {2, 3, 1, 4, 7, 12, 7, 9, 1};

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", niza[i]);
    }

    bubbleSort(niza, 9);

    printf("\n");

    for (int i = 0; i < 9; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}