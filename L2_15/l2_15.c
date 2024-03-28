#include <stdio.h>

int main () {

    int num = 0, qtdpos = 0, qtdneg = 0, somaneg = 0, somapos = 0;
    char espaco = ' ';

    scanf("%d", &num);
    // printf("%d\n", num);
    // scanf("%c", &espaco);
    // printf("%d\n", espaco);
    while (scanf("%c[^\0]", &espaco)) {
        if (num > 0) {
            somapos+=num;
            qtdpos++;
            }
        else {
            somaneg += num;
            qtdneg++;
        }
        espaco = 1;
        scanf("%d", &num);
        // printf("%d\n", num);
        // scanf("%c", &espaco);
        // printf("%d\n", espaco);
    }
    // if (num > 0) {
    //     somapos+=num;
    //     qtdpos++;
    //     }
    // else {
    //     somaneg += num;
    //     qtdneg++;
    // }

    printf("%d %d %d %d", qtdneg, qtdpos, somaneg, somapos);

    // while (1) {
    //     scanf("%d%c", &num, &espaco);
    //     printf("%d\n", espaco);
    //     if (espaco == '=' || espaco == '0') break;
    // }
    // scanf("%c", &espaco);
    // printf("%d", espaco);

    return 0;
}
