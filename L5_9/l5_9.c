#include <stdio.h>

void leVetor(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }
}

void InverteVetor(int * vet, int qtd)
{
    int i, j = 0;
    int aux = 0;

    for (i = qtd-1; j < i; i--)
    {
        // printf("I: %d\n", i);
        aux = vet[i];
        // printf("AUX:%d\n", aux);
        vet[i] = vet[j];
        // printf("VET[I]:%d\n", vet[i]);
        vet[j] = aux;
        // printf("VET[I+1]:%d\n", vet[i+1]);
        j++;
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
    InverteVetor(v, n);
    ImprimeDadosDoVetor(v, n);
    return 0;
}