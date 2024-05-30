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

void ImprimeDados(int vetA[], int qtdA, int vetB[], int qtdB)
{
    int i = 0, j = 0;
    int qtdMaior;

    // if (qtdA>=qtdB)
    //     qtdA = qtdMaior;
    // else 
    //     qtdB = qtdMaior;

    // for (i = 0; i < qtdA;)
    // {
    //     for (; j < qtdB;)
    //     {
    //         if (vetA[i] <= vetB[j])
    //         {
    //             printf("A");
    //             i++;
    //             break;
    //         }
    //         else
    //         { 
    //             printf("B");
    //             j++;
    //             break;
    //         }
    //     }
    // }
    // while (j < qtdB)
    // {
    //     printf("B");
    //     j++;
    // }

    while (i < qtdA && j < qtdB)
    {
        if (vetA[i] <= vetB[j])
            {
                printf("A");
                i++;
            }
            else
            { 
                printf("B");
                j++;
            }
    }
    while (j < qtdB)
    {
        printf("B");
        j++;
    }
    while (i < qtdA)
    {
        printf("A");
        i++;
    }
}


int main ()
{
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    leVetor(a, n1);
    scanf("%d", &n2); 
    int b[n2];
    leVetor(b, n2);

    OrdenaCrescente(a, n1);
    OrdenaCrescente(b, n2);

    ImprimeDados(a, n1, b, n2);
    return 0;
}