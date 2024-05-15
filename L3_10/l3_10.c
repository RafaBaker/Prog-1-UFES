#include <stdio.h>

int EhLetra  (char  c) 
{
    int result = 0;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) result = 1;

    return result;
}

int EhLetraMaiuscula (char c)
{
    int result = 0;

    if (c>='A' && c <= 'Z') result = 1;

    return result;
}

int EhLetraMinuscula (char c)
{
    int result = 0;

    if (c>='a' && c <= 'z') result = 1;

    return result;
}

char Codifica(char letra, int n) 
{
    int valor = (int)letra;
    if (EhLetraMaiuscula(letra)) 
    {
        valor += 2*n; 
        if (valor > 'Z') 
        {
            while(1) 
            {
                valor -= 26;
                if (valor <= 'Z') break;
            }
        }
    }
    else if (EhLetraMinuscula(letra))
    {
        valor += n;
        if (valor > 'z') 
        {
            while(1) 
            {
                valor -= 26;
                if (valor <= 'z') break;
            }
        }
    }

    letra = valor;

    return letra;
}

char Descodifica(char letra, int n) 
{
    int valor = (int)letra;
    if (EhLetraMaiuscula(letra))
    {
        valor -= 2*n;
        if (valor < 'A') 
        {
            while (1) 
            {
                valor += 26;
                if (valor >= 'A') break;
            }
        }
    }
    else if (EhLetraMinuscula(letra))
    {
        valor -= n;
        if (valor < 'a') 
        {
            while (1) 
            {
                valor += 26;
                if (valor >= 'a') break;
            }
        }
    }
    letra = valor;
    return letra;
}

int main () 
{

    int op = 0, cod = 0; 
    char c = '\0';
    
    scanf("%d %d %c", &op, &cod, &c);
    while (c != '.') {
        if (EhLetra(c)) 
        {
            if (op == 1) c = Codifica(c, cod);
            else if (op == 2) c = Descodifica(c, cod);
            else 
            {
                printf("Operacao invalida");
                break;
            }
        }
        printf("%c", c);
        scanf("%c", &c);
    }
    printf(".");

    return 0;
}