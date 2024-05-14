#include <stdio.h>

int EhLetraMaiuscula(char c) 
{
    int result = 0;
    if (c >= 'A' && c <= 'Z') result = 1;
    return result;
}

int EhLetraMinuscula(char c)
{
    int result = 0;
    if (c >= 'a' && c <= 'z') result = 1;
    return result;
}

int EhNumero(char c)
{
    int result = 0;
    if (c >= '0' && c <= '9') result = 1;
    return result;
}

int AnalisaSenha()
{
    int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    int qtd = 0;
    int result = -2;
    char c;


    scanf("(");
    while (1) 
    {
        scanf("%c", &c);
        if (c == ')') break;
        else qtd++;

        if (EhLetraMaiuscula(c)) flag1 = 1;
        else if (EhLetraMinuscula(c)) flag2 = 1;
        else if (EhNumero(c)) flag3 = 1;
        else flag4 = 1;
    }
    result += flag1;
    result += flag2;
    result += flag3;
    result += flag4;

    if (result != 2) result = 1;

    if (qtd < 6) result = 0;

    return result;
}


int main () {

    char c = '\0';
    int result = 0;
    int i = 1, id = 0;
    int codigo = 0;
    int qtdGrupos = 0;
    int qtdFraca = 0, qtdForte = 0, qtdInvalida = 0;
    int maiorFraca = 0, maiorForte = 0, maiorInvalida = 0;
    int qtdMaiorFraca = 0, qtdMaiorForte = 0, qtdMaiorInvalida = 0;

    scanf("%d", &qtdGrupos);

    for (; i <= qtdGrupos; i++)
    {   
        printf("GRUPO %d\n", i);
        while (1)
        {
            scanf("%d", &codigo);
            if (codigo == -1) break;

            result = AnalisaSenha();
            switch (result) 
            {
                case 0:
                    printf("INVALIDA\n");
                    qtdInvalida++;
                    break;
                case 1:
                    printf("FRACA\n");
                    qtdFraca++;
                    break;
                case 2:
                    printf("FORTE\n");
                    qtdForte++;
                    break;
            }
        }
        printf("\n");

        if (qtdFraca > qtdMaiorFraca) 
        {
            qtdMaiorFraca = qtdFraca;
            maiorFraca = i;
        }

        if (qtdForte > qtdMaiorForte)
        {
            qtdMaiorForte = qtdForte;
            maiorForte = i;
        }

        if (qtdInvalida > qtdMaiorInvalida)
        {
            qtdMaiorInvalida = qtdInvalida;
            maiorInvalida = i;
        }

        qtdFraca = 0;
        qtdInvalida = 0;
        qtdForte = 0;
    }

    printf("FORTES: GRUPO(%d) QTD(%d)\n", maiorForte, qtdMaiorForte);
    printf("FRACAS: GRUPO(%d) QTD(%d)\n", maiorFraca, qtdMaiorFraca);
    printf("INVALIDAS: GRUPO(%d) QTD(%d)\n", maiorInvalida, qtdMaiorInvalida);


    return 0;
}