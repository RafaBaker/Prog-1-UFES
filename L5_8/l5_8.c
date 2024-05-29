#include <stdio.h>

void leVetor(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }
}

void TrocaParEImpar(int vet[], int qtd)
{
    int i;
    int aux = 0;

    for (i = 0; ; i+=2)
    {
        if (i+1 >= qtd)
            break;
        aux = vet[i];
        // printf("AUX:%d\n", aux);
        vet[i] = vet[i+1];
        // printf("VET[I]:%d\n", vet[i]);
        vet[i+1] = aux;
        // printf("VET[I+1]:%d\n", vet[i+1]);
    }
}

void ImprimeDadosDoVetor(int vet[], int qtd)
{
    int i;
    printf("{");
    for (i = 0; i < qtd-1; i++)
    {
        if (qtd <= 0)
            break;
        printf("%d", vet[i]);
        printf(", ");
    }
    printf("%d", vet[i]);
    printf("}");
}

int main ()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("{}");
        return 0;
    }
    int v[n];
    leVetor(v, n);
    TrocaParEImpar(v, n);
    ImprimeDadosDoVetor(v, n);
    return 0;
}