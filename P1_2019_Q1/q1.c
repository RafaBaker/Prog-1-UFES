#include <stdio.h>

int main () {

    int a = 0, b = 0, c = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && b > c) printf("DECRESCENTE");
    else if (c > b && b > a) printf("CRESCENTE");
    else printf("TUDO DOIDO");

    return 0;
}