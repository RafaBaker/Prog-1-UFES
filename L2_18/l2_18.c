#include <stdio.h>

int main () {
    int l = 0, c = 0, n = 0, maior = -32767, maiorlinha = 0, maiorcoluna = 0, i = 0, j = 0;

    scanf("%d %d", &l, &c);
    for (i = 1; i <= l; i++) {
        for (j = 1; j <= c; j++) {
            scanf("%d", &n);
            if (n > maior) {
                maior = n;
                maiorlinha = i;
                maiorcoluna = j;
            }
        }
    }

    printf("%d (%d, %d)", maior, maiorlinha, maiorcoluna);

    return 0;
}