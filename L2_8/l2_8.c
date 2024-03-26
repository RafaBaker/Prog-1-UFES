#include <stdio.h>

int main () {
    int n = 0, m =0, i = 1, j = 0, cont = 0;

    scanf("%d %d", &n, &m);
    j = n+1;

    printf("RESP:");
    for (j; j < m; j++) {

        for (i; i <= j; i++) {
            if (j % i == 0) {cont++;}
        }

        if (cont == 2) { printf("%d ", j); }

        cont = 0;
        i = 1;
    }
    return 0;
}