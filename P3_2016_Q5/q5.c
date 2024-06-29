#include <stdio.h>
#include <string.h>

int EhMaiuscula(char c)
{
    return c >= 'A' && c <= 'Z';
}

char* ResetaString(char* str)
{
    int i = 0;
    for (; i < 400; i++)
    {
        str[i] = '\0';
    }
    return str;
}

int main () {

    char alvo[400];
    char fonte[400];
    char nova[400];
    int i = 0, j = 0, k = 0;
    int qtd;
    scanf("%d", &qtd);
    for (; k < qtd; k++)
    {
        ResetaString(nova);
        // printf("nova: %s\n", nova);
        scanf("%s %s", alvo, fonte);
        //convertendo tudo pra minusculo
        while (alvo[i])
        {
            if (EhMaiuscula(alvo[i]))
                alvo[i] += 32;
            i++;
        }
        i = 0;
        // printf("alvo: %s\n", alvo);

        while (fonte[i])
        {
            if (EhMaiuscula(fonte[i]))
                fonte[i] += 32;
            i++;
        }
        i = 0;
        // printf("fonte: %s\n", fonte);
        while (fonte[i])
        {
            if (fonte[i] == alvo[j])
            {
                nova[j] = fonte[i];
                j++;
            }
            i++;
        }
        i = 0;
        j = 0;
        // printf("nova: %s\n", nova);
        // printf("alvo: %s\n", alvo);
        if (!strcmp(nova, alvo))
            printf("PODE!\n");
        else 
            printf("NAO PODE!\n");
    }

    return 0;
}