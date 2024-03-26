#include <stdio.h>

int main () {
    int num = 0, i = 1, cont = 0;

    scanf("%d", &num);

    for (i; i <= num; i++) {
        if (num % i == 0) {cont++;};
    }

    if (cont == 2) {
        printf("Primo");
    } else {
        printf("Nao primo");
    }


    return 0;
}