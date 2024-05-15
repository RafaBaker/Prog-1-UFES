#include <stdio.h>

int EhIgual(int a, int b)
{
    if (a == b) return 1;
    else return 0;
}

int MaiorDigito(int num)
{
    int maior = 0;
    int digito = 0;
    
    while (num > 0 )
    {
        digito = num % 10;
        num /= 10;

        if (digito > maior) maior = digito;
    }

    return maior;
}

int main ()
{
    int a = 0, b = 0;
    int maiorA = 0, maiorB = 0;
    int qtd = 0;

    while (scanf("(%d,%d)", &a, &b) == 2)
    {
        maiorA = MaiorDigito(a);
        maiorB = MaiorDigito(b);

        if (EhIgual(maiorA, maiorB))
        {
            qtd++;
        }
    }

    printf("COUNT:%d", qtd);

    return 0;
}