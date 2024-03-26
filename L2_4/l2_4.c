#include <stdio.h>

int main() {
    int num = 0, maior = 0, qtd = 0;
    float media = 0.0, soma = 0.0;
    
    scanf("%d", &num);
    while (!(num == 0)) {
        qtd++;
        soma += num;
        maior = (num > maior) ? num : maior;
        media =  soma/qtd;

        printf("%d %f\n", maior, media);
        scanf("%d", &num);
    }
    
    return 0;
}
