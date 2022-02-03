// Да се напише функција која за низа од N цели броеви ќе ги пронајде почетокот и должината на најголемата растечка подниза.

#include "stdio.h"

void subArray(int *niza, int n, int *startIndex, int *len)
{
    for (int i = 0; i < n; i++)
    {
        int s = i;
        int _len = 1;

        for (int j = i; j < n - 1; j++)
        {
            if (niza[j] < niza[j + 1])
            {
                _len++;
            }
            else
            {
                break;
            }
        }

        if (_len > *len)
        {
            *startIndex = s;
            *len = _len;
        }
    }
}

int main()
{
    int niza[] = {2, 3, 1, 4, 7, 12, 7, 9, 1};

    int startIndex = 0;
    int len = 0;

    subArray(niza, 9, &startIndex, &len);

    printf("%d %d", startIndex, len);

    return 0;
}