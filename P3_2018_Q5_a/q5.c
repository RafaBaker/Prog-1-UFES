#include <stdio.h>

#define MAX_TAM 50

void InicializaVetor(int vet[], int tam)
{
    int i = 0;
    for (; i < tam; i++)
    {
        vet[i] = 0;
    }
}


void SomaVetores(int vet1[], int vet2[], int tam1, int tam2)
{
    int s = 0;
    int sobe = 0;
    char soma[MAX_TAM];
    int i, j = tam2-1;

    for (i = 0; i < 50; i++)
        soma[i] = '\0';

    for (i=tam1-1; i >= 0 ; i--)
    {
        if (j >= 0)
            s = vet1[i]+vet2[j]+sobe;
        else
            s = vet1[i]+sobe;
        if (s > 9)
        {
            s = s%10;
            sobe = 1;
        }
        else
            sobe = 0;
        soma[i] = s+'0';
        j--;
    }
    if (sobe)
        printf("1");

    printf("%s\n", soma);
}

int main () {

    int num1[MAX_TAM];
    int num2[MAX_TAM];
    int n = 0;
    int i = 0, j = 0, k;
    int qtd;

    scanf("%d", &qtd);
    for (k = 0; k < qtd; k++)
    {
        i = 0; j = 0;
        InicializaVetor(num1, MAX_TAM);
        InicializaVetor(num2, MAX_TAM);

        scanf("%d", &n);
        while (n != -1)
        {
            num1[i] = n;
            i++;
            scanf("%d", &n);
        }
        scanf("%d", &n);
        while (n != -1)
        {
            num2[j] = n;
            j++;
            scanf("%d", &n);
        }
        SomaVetores(num1, num2, i, j);
    }

    return 0;
}