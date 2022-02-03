#include "stdio.h"

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void divideArrayWith2(int *niza, int n)
{
    if (n == 0)
        return;

    niza[n - 1] /= 2;

    divideArrayWith2(niza, n - 1);
}

int main()
{
    // int x;
    // int *xPtr = &x;

    // int *x1Ptr = xPtr;

    // scanf("%d", xPtr);
    // printf("%d", *x1Ptr);

    int x = 5, y = 6;
    swap(&x, &y);
    printf("%d %d\n", x, y);

    int niza[] = {2, 4, 6, 8, 10};
    divideArrayWith2(niza, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", niza[i]);
    }

    return 0;
}