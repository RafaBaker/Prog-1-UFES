#include <stdio.h>
#include <string.h>

int ContaConsoante(char *palavra);

int ContaVogal(char *palavra);

int EhVogal(char c);

int EhLetra(char c);

int EhMaiuscula(char c);

void ImprimeConsoantes (char* palavra);

void ImprimeVogais (char* palavra);

int main()
{
    char palavra[100];
    int qtdConsoante = 0, qtdVogal = 0;
    int i = 0;

    while (scanf("%s", palavra) == 1)
    {
        // printf("%s\n", palavra);
        qtdConsoante = ContaConsoante(palavra);
        qtdVogal = ContaVogal(palavra);

        if (qtdConsoante > qtdVogal)
            ImprimeConsoantes(palavra);
        else if (qtdVogal > qtdConsoante)
            ImprimeVogais(palavra);
        else 
            printf("%s\n", palavra);
    }

    return 0;
}

int EhLetra(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

int ContaConsoante(char* palavra)
{
    int i = 0, qtdConsoante = 0;
    while (palavra[i])
    {
        if (EhLetra(palavra[i]))
            if (!(EhVogal(palavra[i])))
                qtdConsoante++;
        i++;
    }
    return qtdConsoante;
}

int ContaVogal(char *palavra)
{
    int i = 0, qtdVogal = 0;
    while (palavra[i])
    {
        if (EhVogal(palavra[i]))
            qtdVogal++;
        i++;
    }
    return qtdVogal;
}

int EhVogal(char c)
{
    if (EhMaiuscula(c))
    {
        c = c+32;
    }

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) 
        return 1;
    return 0;
}

int EhMaiuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}


void ImprimeConsoantes (char* palavra)
{
    int i = 0;
    while (palavra[i])
    {
        if (EhLetra(palavra[i]) && !(EhVogal(palavra[i])))
            printf("%c", palavra[i]);
        i++;
    }
    printf("\n");
}

void ImprimeVogais (char* palavra)
{
    int i = 0;
    while (palavra[i])
    {
        if (EhVogal(palavra[i]))
            printf("%c", palavra[i]);
        i++;
    }
    printf("\n");
}