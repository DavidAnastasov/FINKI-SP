// Од стандарден влез се чита еден природен број n.
// Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
// Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

// For example:
// Input	Result
// 10       8

#include "stdio.h"

int main()
{
    int n;
    scanf("%d", &n);

    int najgolemZbir = 0;
    int broj = 0;

    for (int i = 1; i < n; i++)
    {
        int zbir = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                zbir += j;
        }

        if (zbir > najgolemZbir)
        {
            najgolemZbir = zbir;
            broj = i;
        }
    }

    printf("%d", broj);

    return 0;
}