#include <stdio.h>

int main () {

    int num = 0, qtdpos = 0, qtdneg = 0, somaneg = 0, somapos = 0;
    char espaco = '\0';

    while ((scanf("%d", &num)) == 1) {
        // scanf("%d%c", &num, &espaco);
        if (num > 0) {
            somapos+=num;
            qtdpos++;
            }
        else {
            somaneg += num;
            qtdneg++;
        }
    }

    if (!((qtdneg == 0) && (qtdpos == 0) && (somaneg == 0) && (somapos==0))) {
        printf("%d %d %d %d", qtdneg, qtdpos, somaneg, somapos);
    }

    return 0;
}
