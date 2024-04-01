#include <stdio.h>

int main () {

    int num = 0, qtdpos = 0, qtdneg = 0, somaneg = 0, somapos = 0;
    char espaco = '\0';

    while ((scanf("%d%c", &num, &espaco)) >= 1) {
        if (num > 0 && num < 100) {
            somapos+=num;
            qtdpos++;
            }
        else if (num < 0 && num > -100){
            somaneg += num;
            qtdneg++;
        }
    }

    printf("%d %d %d %d", qtdneg, qtdpos, somaneg, somapos);

    return 0;
}
