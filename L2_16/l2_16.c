#include <stdio.h>

int main () {

    int num = 0, menor = 32001, i = 0, posicao = 0, primeira = 0, ultima = 0, tamanhoseq = 0;
    char espaco = '\0';


    while ((scanf("%d%c", &num, &espaco)) >= 1) {
        if (num < menor) {
            menor = num;
        }
    }

    while ((scanf("%d%c", &num, &espaco)) >= 1) {
        if (num == menor) {
            posicao = i;
        }
    }

    return 0;
}
