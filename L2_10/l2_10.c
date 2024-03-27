#include <stdio.h>

int main () {
    int n = 0, m = 0, i = 0, c = 0;

    scanf("%d %d", &n, &m);

    for (i = n; i <= m; i++) {
        c = 1;
        for (c; c <= 10; c++) {
            printf("%d x %d = %d\n", i, c, i*c);
        }
    }

    return 0;
}