#include <stdio.h>

void leVetor(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }
}

void OrdenaCrescente(int vet[], int qtd)
{
    int i;
    int j;
    int min;
    int aux;
    for (i = 0; i < qtd-1; i++) {
        //O menor sempre vai estar no inicio, então para descobrir o minimo é necessario começar do indice i
        min = i;
        //For para achar o index do menor
        for (j = i+1; j < qtd; j++)
            if (vet[j] < vet[min])
                min = j;
        //Trocando o valor do index i (atual) pelo menor, assim colocando o menor na primeira posição 
        aux = vet[i]; 
        vet[i] = vet[min]; 
        vet[min] = aux; 
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
    OrdenaCrescente(v, n);
    ImprimeDadosDoVetor(v, n);
    return 0;
}