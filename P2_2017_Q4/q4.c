#include <stdio.h>

int EhLetra(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return 1;
    }
    else return 0;
}

int EhVogal(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return 1;
    else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    else return 0;
}

int ReconheceSimbolo(char c)
{
    char simbolo = '\0';
    char prox = '\0';
    if (c == '*')
    {
        scanf("%c%c", &simbolo, &prox);

        if (simbolo == '.') return -1; 

        if (prox != '*')
        {
            while (1)
            {
                scanf("%c", &prox);
                if (prox == '*') break;
            }
            return -1;
        }

        else 
        {
            if (simbolo == '1')
            {
                return 1;
            }
            else if (simbolo == '2')
            {
                return 2;
            }
            else if (simbolo == '3')
            {
                return 3;
            }
            else
            {
                return -1;
            }
        }
    }
    else 
    {
        return 0;
    }
}

int main ()
{
    char c = '\0';
    int flag = 0;
    int qtdVogais = 0, qtdConsoantes = 0, qtdLetras = 0;

    while (scanf("%c", &c) == 1)
    {
        if (c == '.') break;

        if (EhLetra(c))
        {
            qtdLetras += 1;
            if (EhVogal(c)) qtdVogais += 1;
            else qtdConsoantes += 1;
            printf("%c", c);
        } 
        flag = ReconheceSimbolo(c);
        switch (flag)
        {
            case 0:
                break;
            case 1:
                printf("*L:%d V:%d C:%d*", qtdLetras, qtdVogais, qtdConsoantes);
                qtdLetras = 0;
                qtdConsoantes = 0;
                qtdVogais = 0;
                break;
            case 2:
                printf("*V:%d*",qtdVogais);
                qtdVogais = 0;
                break;
            case 3:
                printf("*C:%d*", qtdConsoantes);
                qtdConsoantes = 0;
                break;
            case -1:
                printf("*ERRO*");
                break;
        }
    }
    printf(".");

    return 0;
}