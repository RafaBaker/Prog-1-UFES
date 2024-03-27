#include <stdio.h>

int main () {
    int n = 0, m = 0, i = 0, a = 0, b = 0, soma = 0;

    scanf("%d %d", &n, &m);

    for (i=n+1; i < m; i++) {
        a = i / 100;
        b = i % 100;
        soma = a + b;
        if ((soma*soma) == i) printf("%d\n", i);
    }

    return 0;
}