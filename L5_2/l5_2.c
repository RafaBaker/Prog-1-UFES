#include <stdio.h>

int ChecaCrescente(int n[], int tam)
{
    int rtn = 1, inicio = 1;
    int i, ant;

    for (i = 0; i < tam; i++)
    {
        if (inicio)
        {
            ant = n[i];
            inicio = 0;
            continue;
        }

        if (ant > n[i])
        {
            rtn = 0;
            break;
        }

        ant = n[i];
    }

    return rtn;
}

int ChecaDecrescente(int n[], int tam)
{
    int rtn = 1, inicio = 1;
    int i, ant;

    for (i = 0; i < tam; i++)
    {
        if (inicio)
        {
            ant = n[i];
            inicio = 0;
            continue;
        }

        if (ant < n[i])
        {
            rtn = 0;
            break;
        }

        ant = n[i];
    }

    return rtn;
}

int main ()
{
    int cres, decres;
    int qtd;
    int i;
    scanf("%d", &qtd);

    int notas[qtd];
    for (i = 0; i < qtd; i++)
        scanf("%d", &notas[i]);
    
    cres = ChecaCrescente(notas, qtd);
    decres = ChecaDecrescente(notas, qtd);

    if (cres && decres)
        printf("CRESCENTE&DECRESCENTE");
    else if (cres)
        printf("CRESCENTE");
    else if (decres)
        printf("DECRESCENTE");
    else
        printf("DESORDENADO");
    return 0;
}