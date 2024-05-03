#include <stdio.h>

int main()
{
    int soma = 0;
    int entr = 0, num = 0, digt = 0, div = 0;
    int c = 0, i = 0;

    scanf("%d", &entr);
    num = entr;
    while (1) {
        //pegando a quantidade de digitos (variavel C)
        while (num != 0) {
            soma += num % 10;
            num /= 10;
        }
        if (soma < 10) {
            break;
        } else {
            num = soma;
            soma = 0;
        }
    }
    printf("RESP:%d", soma);

    return 0;
}
