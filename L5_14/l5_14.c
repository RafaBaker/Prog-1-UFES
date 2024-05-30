#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
} tCandidato;

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);
void ImprimeSobrenomeRepetido(tCandidato vet[], int tam);
int ComparaString(char *str1, char *str2);
void OrdenaVetorPorCodigo(tCandidato vet[], int tam);

int main()
{
    int qtdCand, i = 0;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }
    // OrdenaVetorPorCodigo(candidatos, qtdCand);
    ImprimeSobrenomeRepetido(candidatos, qtdCand);

    return 0;
}

tCandidato LeCandidato()
{
    tCandidato candidato;
    scanf("%*[^{]");
    scanf("%*[{ ]");
    scanf("%d", &candidato.codigo);
    scanf("%*[, ]");
    scanf("%[^,],", candidato.sobrenome);
    scanf("%*[ ]");
    scanf("%[^,],", candidato.nome);
    scanf("%d", &candidato.nota);
    scanf("%*[, ]");
    scanf("%d", &candidato.idade);
    scanf("%*[^\n]\n");
    return candidato;
}

void ImprimeCandidato(tCandidato candidato)
{
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", 
    candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade);
}

int ComparaString(char *str1, char *str2)
{
    int i = 0, j = 0;

    while (str1[i] != '\0')
    {
        i++;
    }

    while (str2[j] != '\0')
    {
        j++;
    }

    if (i == j)
    {
        i = 0;
        while (str1[i] != '\0')
        {
            if (str1[i] != str2[i]) return 0;
            i++;
        }
        return 1;
    }

    return 0;
}

void OrdenaVetorPorCodigo(tCandidato vet[], int tam)
{
    int i;
    int j;
    int min;
    tCandidato aux;
    for (i = 0; i < tam-1; i++) {
        //O menor sempre vai estar no inicio, então para descobrir o minimo é necessario começar do indice i
        min = i;
        //For para achar o index do menor
        for (j = i+1; j < tam; j++)
            if (vet[j].codigo < vet[min].codigo)
                min = j;
        aux = vet[i]; 
        vet[i] = vet[min]; 
        vet[min] = aux; 
   }
}

void ImprimeSobrenomeRepetido(tCandidato vet[], int tam)
{
    int i, j;
    int verificada[tam];
    for (i = 0; i < tam; i++)
    {
        verificada[i] = 0;
    }

    for (i = 0; i < tam; i++)
    {
        if (verificada[i]) continue;
        for (j = 0; j < tam; j++)
        {
            if (j == i)
                continue;

            if (ComparaString(vet[i].sobrenome, vet[j].sobrenome))
            {
                if (!verificada[i])
                {
                    verificada[i] = 1;
                    ImprimeCandidato(vet[i]);
                }
                ImprimeCandidato(vet[j]);
                verificada[j] = 1;
            }
        }
    }
}