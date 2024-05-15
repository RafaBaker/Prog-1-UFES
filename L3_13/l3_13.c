#include <stdio.h>

int EhLetra  (char  c) 
{
    int result = 0;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) result = 1;

    return result;
}

int EhLetraMaiuscula (char c)
{
    int result = 0;

    if (c>='A' && c <= 'Z') result = 1;

    return result;
}

int EhLetraMinuscula (char c)
{
    int result = 0;

    if (c>='a' && c <= 'z') result = 1;

    return result;
}

int EhPrimo(int num)
{
    int i = 1;
    int resto = 0;
    int qtdDiv = 0;
    int result = 0;

    for (; i <= num; i++)
    {
        resto = num % i;
        if (resto == 0) qtdDiv++; 
    }

    if (qtdDiv == 2) result = 1;
    
    return result;
}

int ProximoPrimo(int n)
{
    int result = 0;
    int i = 0;

    for (i = n; ;i++)
    {
        if (EhPrimo(i))
        {
            result = i;
            break;
        }
    }
    return result;
}


int CalculaValorPalavra()
{
    char car = '\0';
    int valor = 0;
    int soma = 0;

    while (1)
    {
        if (scanf("%c", &car) != 1)
        {
            soma = -1;
            break;
        };
        if (car == '\n') break;
        if (EhLetra(car))
        {
            if (EhLetraMaiuscula(car))
            {
                valor = car - 38;
            }
            if (EhLetraMinuscula(car))
            {
                valor = car - 96;
            }
            soma += valor;
        }
    }

    return soma;
}

int main ()
{
    int valor = 0;


    while (1)
    {
        valor = CalculaValorPalavra();
        if (valor == -1) break;
        if (EhPrimo(valor))
        {
            printf("E primo\n");
        }
        else 
        {
            printf("Nao e primo ");
            valor = ProximoPrimo(valor);
            printf("%d\n", valor);
        }
    }

    return 0;
}