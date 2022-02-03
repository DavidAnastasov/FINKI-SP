// Од тастатура се вчитува природен број N, а потоа се вчитуваат последователно N тројки цели броеви (a, b, c).
// Нека за секоја тројка цели броеви a, b и c се дефинира вредност rez што се пресметува според следната формула:

// rez = 2*min – max/2 + |min - a|

// кадешто min е најмалиот број од тројката, а max - најголемиот број од тројката броеви a, b, c.

// На излез да се испечати вредноста rez за секоја од тројките броеви, во посебни редови, според форматот во примерот.

#include <stdio.h>

int min (int a, int b) {
    return a < b ? a : b;
}

int max (int a, int b) {
    return a > b ? a : b;
}

int abs (int a) {
    return +a;
}

int main () {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        int najmal = min(min(a, b), c);
        int najgolem = max(max(a, b), c);

        // rez = 2*min – max/2 + |min - a|
        float res = 2.0 * najmal - najgolem / 2.0 + abs(najmal - a);

        printf("%.2f\n", res);
    }

    return 0;
}
