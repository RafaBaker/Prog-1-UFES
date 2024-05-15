#include <stdio.h>

int somadosdigitos(int n)
{
    int soma = 0;

    while (n > 0)
    {
        soma += n % 10;
        n /= 10;
    }

    return soma;
}

void parImpar(int n)
{
    int resto = 0;

    resto = n % 2;

    if (resto == 0) printf("Par ");
    else printf("Impar ");
}

int verificaPrimo(int n)
{
    int i = 1;
    int resto = 0;
    int qtdDiv = 0;
    int result = 0;

    for (; i <= n; i++)
    {
        resto = n % i;
        if (resto == 0) qtdDiv++; 
    }

    if (qtdDiv == 2) result = 1;
    
    return result;
}

void valorPrimo(int n)
{
    if (verificaPrimo(n)) printf("Primo"); 
    else printf("Nao e primo");
}

int main ()
{
    int n = 0;
    int soma = 0;

    scanf("%d", &n);

    soma = somadosdigitos(n);
    while (1)
    {
        printf("%d ", soma);
        parImpar(soma);
        valorPrimo(soma);
        printf("\n");

        if (soma >= 10)
        {
            soma = somadosdigitos(soma);
        }
        else 
        {
            break;
        }
    }

    return 0;
}