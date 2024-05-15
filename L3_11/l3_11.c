#include <stdio.h>

int EhPar(int x)
{
    int result = 0;
    int resto = 0;
    
    resto = x % 2;
    if (resto == 0) result = 1;

    return result;
}

void PrintaPares(int N) 
{
    int i = 1;
    int qtdPares = 0;

    while (1)
    {
        if (EhPar(i))
        {
            qtdPares += 1;
            printf("%d ", i);
        }

        if (qtdPares == N) break;
        i++;
    }

}

void PrintaImpares (int N)
{
    int i = 1;
    int qtdImpares = 0;

    while (1)
    {
        if (!(EhPar(i)))
        {
            qtdImpares += 1;
            printf("%d ", i);
        }

        if (qtdImpares == N) break;
        i++;
    }
}

int main ()
{
    int tipo = -1, n = 0;

    scanf("%d %d", &tipo, &n);
    switch (tipo)
    {
        case 0:
            PrintaPares(n);
            break;
        case 1:
            PrintaImpares(n);
            break;
    }

    return 0;
}