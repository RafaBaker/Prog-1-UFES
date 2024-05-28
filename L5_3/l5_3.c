#include <stdio.h>

int maiorDiferencaPar(int postes[], int tam)
{
    int i;
    int ant = 0;
    int inicio = 1;
    int dif;
    int maiorDif = 0;

    if (tam == 1)
        return -1;

    for (i = 0; i < tam; i++)
    {
        if (inicio)
        {
            ant = postes[i];
            inicio = 0;
            continue;
        }

        dif = postes[i] - ant;
        if (dif < 0)
            dif*=-1;

        if (dif > maiorDif)
            maiorDif = dif;

        ant = postes[i];
    }
    return maiorDif;
}

void ImprimePares(int postes[], int tam, int maiorDif)
{
    int difAtual = 0;
    int inicio = 1;
    int ant;
    int i = 0;

    for (;i < tam; i++)
    {
        if (inicio)
        {
            ant = postes[i];
            inicio = 0;
            continue;
        }

        difAtual = postes[i]- ant;
        if (difAtual < 0)
            difAtual*=-1;
            
        if (difAtual >= maiorDif)
            printf(" (%d %d)", i-1, i);

        ant = postes[i];
    }
}


int main ()
{
    int n=0;
    int i;
    int maiorDif = 0;

    scanf("%d", &n);

    int postes[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &postes[i]);
    }

    maiorDif = maiorDiferencaPar(postes, n);

    if (maiorDif == -1)
        printf("IMPOSSIVEL");
    else
        ImprimePares(postes, n, maiorDif);

    return 0;
}