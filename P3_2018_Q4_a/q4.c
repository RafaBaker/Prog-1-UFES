#include <stdio.h>

int RetornaMaiorPalavra(char *palavra1, char *palavra2)
{
    int i = 0, j = 0;
    int flag;
    while (palavra1[i])
    {
        i++;
    }
    while (palavra2[j])
    {
        j++;
    }
    if (i > j)
        return -1;
    if (j > i)
        return 1;
    return 0;
}

void CopiaString(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i])
    {
        i++;
    }
    for (; j < i; j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
}

int main()
{

    char palavra1[1000];
    char palavra2[1000];
    char maior[1000] = {'-', '-'};
    int flag = 0;
    int i = 0;
    int j;

    while (scanf("%s %s", palavra1, palavra2) == 2)
    {
        i = 0;
        flag = RetornaMaiorPalavra(palavra1, palavra2);
        switch (flag)
        {
            case 0:
                break;
            case -1:
                printf("%s\n", palavra1);
                if (RetornaMaiorPalavra(palavra1, maior) == -1)
                {
                    while (palavra1[i])
                        i++;
                    for (j = 0; j < i; j++)
                        maior[j] = palavra1[j];
                    maior[j] = '\0';
                }
                break;
            case 1:
                printf("%s\n", palavra2);
                if (RetornaMaiorPalavra(palavra2, maior) == -1)
                {
                    while (palavra2[i])
                        i++;
                    for (j = 0; j < i; j++)
                        maior[j] = palavra2[j];
                    maior[j] = '\0';
                }
                break;
        }
    }
    if (maior)
        printf("MAX:%s\n", maior);

    return 0;
}