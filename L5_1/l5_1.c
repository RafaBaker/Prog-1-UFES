#include <stdio.h>
#include <math.h>

#define NOTA_MIN 70

int SomaNotas(int n[], int qtd)
{
    int i;
    int soma = 0;

    for (i = 0; i < qtd; i++)
    {
        soma += n[i];
    }

    return soma;
}

float MediaNotas(int n[], int qtd)
{
    int soma = SomaNotas(n, qtd);
    return (float)soma/qtd;
}

float CalculaDesvio(int n[], int qtd, float media)
{
    int i;
    float desvio = 0;
    float numerador = 0;

    for (i = 0; i < qtd; i++)
    {
        numerador += (n[i]-media)*(n[i]-media);
    }

    desvio = numerador/qtd;
    desvio = sqrt(desvio);

    return desvio;
}

int AchaMaior(int n[], int qtd)
{
    int i;
    int maior = 0;
    for (i = 0; i < qtd; i++)
    {
        if (n[i]>maior)
            maior = n[i];
    }
    return maior;
}

int AchaMenor(int n[], int qtd)
{
    int i;
    int inicio = 1;
    int menor = 0;
    for (i = 0; i < qtd; i++)
    {
        if (inicio) 
        {
            menor = n[i];
            inicio = 0;
            continue;
        }

        if (n[i]<menor)
            menor = n[i];
    }
    return menor;
}

int CalculaAcima(int n[], int qtd, float media)
{
    int i;
    int qtdAprov = 0;

    for (i = 0; i < qtd; i++)
    {
        if (n[i]>media)
            qtdAprov++;
    }

    return qtdAprov;
}

int CalculaReprovado(int n[], int qtd)
{
    int i;
    int qtdReprov = 0;
    for (i = 0; i < qtd ;i++)
    {
        if (n[i] < NOTA_MIN)
            qtdReprov++;
    }

    return qtdReprov;
}

int main ()
{
    int qtd = 0;
    int i, maior, menor, qtdAprov, qtdReprov;
    float media, desvio;

    scanf("%d", &qtd);

    int notas[qtd];

    for (i = 0; i < qtd ;i++)
        scanf("%d", &notas[i]);

    media = MediaNotas(notas, qtd);
    maior = AchaMaior(notas, qtd);
    menor = AchaMenor(notas, qtd);
    desvio = CalculaDesvio(notas, qtd, media);
    qtdAprov = CalculaAcima(notas, qtd, media);
    qtdReprov = CalculaReprovado(notas, qtd);

    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d", menor, maior, media, desvio, qtdAprov, qtdReprov);

    return 0;
}