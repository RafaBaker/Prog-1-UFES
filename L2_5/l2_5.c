#include <stdio.h>
#include <math.h>

int main() {
    int n = 0, k = 1;
    double pi = 0, soma = 0;
    
    scanf("%d", &n);
    for (k; k <= n; k++) {
        soma += 6/(pow(k, 2));
    }
    pi = sqrt(soma);
    printf("%.6lf", pi);
    
    return 0;
}
