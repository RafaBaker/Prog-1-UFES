#include <stdio.h>

void ImprimeSequencia (int n, int seq[]);

void DeslocaDireita(int num, int seq[], int tam);

int main ()
{
    int n1 = 0, n2 = 0, i;
    
    
    while (scanf("%d", &n1) == 1)
    {
        int seq[n1];

        for (i = 0; i < n1; i++)
        {
            scanf("%d", &seq[i]);
        }

        while (1)
        {
            scanf("%d", &n2);  
            if (n2 == -1) break;

            DeslocaDireita(n2, seq, n1);
        }
    }
    return 0;
}

void DeslocaDireita(int num, int seq[], int tam)
{
    int i = 0, j = 0, aux = 0;
    int vet[tam];
    int soma = 0;
    for (i = 0; i < tam; i++)
    {
        soma = i+num;
        if (soma >= tam)
        {
            soma = soma % tam;
        }
        vet[soma] = seq[i];
    }

    //copiando o vetor pro outro
    for (i = 0; i < tam; i++)
    {
        seq[i] = vet[i];
    }

    ImprimeSequencia(tam, vet);
}

void ImprimeSequencia(int n, int seq[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", seq[i]);
        if (i != n-1)
            printf(" ");
    }
    printf("\n");
}
