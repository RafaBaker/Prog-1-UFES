#include <stdio.h>

int main () {
    int n = 0, m =0, i = 1, j = 0, cont = 0, c = 0, multiplos = 0;

    scanf("%d %d", &n, &m);
    j = n+1;

    for (j; j < m; j++) {

        for (i; i <= j; i++) {
            if (j % i == 0) {cont++;}
        }

        if (cont == 2) {
            c = j+1; 
            printf("%d\n", j);
            for (c; c < m; c++) {
                if (c % j == 0) {
                    printf("%d ", c);
                    multiplos++;
                }
            }
            if (multiplos == 0) {
                printf("*");
            }
            printf("\n");
        }

        multiplos = 0;
        cont = 0;
        i = 1;
    }
    return 0;
}