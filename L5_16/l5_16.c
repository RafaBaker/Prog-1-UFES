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

void OrdenaCrescente(tCandidato *vet, int qtd);

int main()
{
    int qtdCand, i = 0, j;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    OrdenaCrescente(candidatos, qtdCand);

    for (i = 0; i < qtdCand; i++)
    {
        ImprimeCandidato(candidatos[i]);
    }

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
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade);
}

void OrdenaCrescente(tCandidato *vet, int qtd)
{
    int i;
    int j;
    int min;
    tCandidato aux;

    for (i = 0; i < qtd - 1; i++)
    {
        // O menor sempre vai estar no inicio, então para descobrir o minimo é necessario começar do indice i
        min = i;
        // For para achar o index do menor
        for (j = i + 1; j < qtd; j++)   
            if (vet[j].nota > vet[min].nota)
                min = j;
            else if (vet[j].nota == vet[min].nota)
                if (vet[j].idade < vet[min].idade)
                    min = j;
                else if (vet[j].idade == vet[min].idade)
                    if (vet[j].codigo < vet[min].codigo)
                        min = j;

            // if (vet[j].codigo < vet[min].codigo)
            //     min = j;
        aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux;
    }
}