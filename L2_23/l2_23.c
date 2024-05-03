#include <stdio.h>

int main () {

    char car = '\0';
    int qtdparaberto = 0, qtdparfechado = 0;

    scanf("%c", &car);
    printf("RESP:");
    while (1) {
        if (car == '.') break;

        if (car == '(') {
            qtdparaberto += 1;
            while (1) {
                scanf("%c", &car);
                if (car == ')') {
                    qtdparfechado += 1;
                    if (qtdparaberto == qtdparfechado) break;
                } else if (car == '(') {
                    qtdparaberto += 1;
                }

                printf("%c", car);

            }
        }
        scanf("%c", &car);
    }

    return 0;
}