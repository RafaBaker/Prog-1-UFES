#include <stdio.h>

void leVetor(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }
}

void checaPA(int v[], int tam)
{
    int inicio = 1;
    int i;
    int ant;
    int razao = -1, dif = 0;

    if (tam == 1)
    {
        printf("NAO");
        return;
    }

    for (i = 0; i < tam; i++)
    {
        if (inicio)
        {
            inicio = 0;
            continue;
        }

        dif = v[i] - v[i-1];
        if (razao == - 1)
        {
            razao = dif;
            continue;
        }

        if (dif != razao)
        {
            printf("NAO");
            return;
        }
    }
    printf("RESP:%d", razao);
}

int main ()
{
    int n;
    int rtn;

    scanf("%d", &n);
    int v[n];
    leVetor(v, n);

    checaPA(v, n);

    return 0;
}