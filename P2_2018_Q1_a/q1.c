#include <stdio.h>

int ehPar(int n)
{
    if ((n % 2) == 0) return 1;
    else return 0;
}

int ehImpar (int n)
{
    if ((n % 2) == 0) return 0;
    else return 1;
}

int main ()
{
    int n = 0, valor = 0, soma = 0;
    int i = 0;
    int valorI = 0;

    scanf("%d", &n);
    scanf("%*c");

    for (; i < n; i++)
    {
        scanf("%d ", &valor);
        valorI = ehPar(i);
        if (valorI) 
        {
            if (ehPar(valor)) soma += valor; 
        }
        else 
        {
            if (ehImpar(valor)) soma += valor;
        }
    }

    printf("SOMA:%d", soma);

    return 0;
}