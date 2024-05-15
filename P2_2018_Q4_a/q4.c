#include <stdio.h>

int EhDigito(char c)
{
    if (c >= '0' && c <='9') return 1;
    else return 0;
}

int ReduzInteiro(int n)
{
    int digito = 0, soma = 0;

    while (n > 0)
    {
        digito = n % 10;
        n = n/10;
        soma += digito;
    }

    if (soma > 9)
    {   
        while (1)
        {
            n = soma;
            soma = 0;
            while (n > 0)
            {
                digito = n % 10;
                n = n/10;
                soma += digito;
            }
            if (soma < 10) break;
        }
    }

    return soma;
}

int MontaSenha(int senha, int dig)
{
    senha = senha *10;
    senha = senha + dig;
    return senha;
}

int ReduzCodigo()
{
    int soma = 0;
    char c = '\0';
    scanf("%c", &c);
    if (EhDigito(c))
    {
        while (EhDigito(c))
        {
            soma += (c-'0');
            scanf("%c", &c);
        }
        soma = ReduzInteiro(soma);
        return soma;

    }
    else if (c == ')')
    {
        return -1;
    }
}

int main ()
{
    int senha = 0, dig = 0;
    char c = '\0';


    scanf("%c", &c);
    while (!(c == '.'))
    {
        if (c == '(')
        {
            dig = ReduzCodigo();
            if (dig == -1)
            {
                printf("[ERRO]");
            }
            else
            {
                printf("[%d]", dig);
                senha = MontaSenha(senha, dig);
            }
        }
        else
        {
            printf("%c", c);
        }
        scanf("%c", &c);
    }
    printf(". ");
    printf("SENHA:%d\n", senha);

    return 0;
}