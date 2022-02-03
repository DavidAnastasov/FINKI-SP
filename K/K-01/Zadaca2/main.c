#include <stdio.h>
#include <math.h>

int main () {

    int X;
    int N;

    // Од тастатура се внесуваат два цели броеви X и N.
    scanf("%d %d", &X, &N);

    for (int i = 0; i < N; i++) {
        // Пoтоа од тастатура се внесуваат уште N природни броеви поголеми од 9.
        int broj;
        scanf("%d", &broj);

        if (broj < 10) {
            continue;
        }

        int najznacajna = 0;
        int temp = broj;
        int brojac = 0;
        while((int)temp > 0) {
            najznacajna = temp % 10;
            temp /= 10;
            brojac++;
        }

        int faktor = pow(10, brojac-1);

        if (faktor ==в 0) {
            printf("NE\n");
            continue;
        }

        broj = broj % faktor;
        broj *= 10;
        printf("%d ", broj);
        broj += najznacajna;
        printf("%d ", broj);

        if (X == 0) {
            printf("NE\n");
            continue;
        }

        if (broj % X == 0) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }

    return 0;
}
