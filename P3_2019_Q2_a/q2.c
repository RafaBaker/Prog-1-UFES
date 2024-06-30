#include <stdio.h>

int ContaPadraoVertical(int qtdPad, int l, int c, char matriz[l][c])
{
    int qtd=0;
    int flag;
    int i, j;
    int i2, j2;

    for (i = 0; i < c; i++)
    {
        for (j = 0; j <= l-qtdPad; j++)
        {
            flag = 1;
            for (j2 = 0; j2 < qtdPad && flag; j2++)
            {
                if (matriz[j+j2][i] == '0')
                {
                    flag = 0;
                }
            }
            if (flag)
                qtd++;
        }
    }
    return qtd;
}

int ContaPadraoHorizontal(int qtdPad, int l, int c, char matriz[l][c])
{
    int qtd=0;
    int flag;
    int i, j;
    int i2, j2;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j <= c-qtdPad; j++)
        {
            flag = 1;
            for (j2 = 0; j2 < qtdPad && flag; j2++)
            {
                if (matriz[i][j+j2] == '0')
                {
                    flag = 0;
                }
            }
            if (flag)
                qtd++;
        }
    }
    return qtd;
}

int main () {

    int qtdPad;
    int qtd;
    char tipoPad;
    int l, c;
    int i, j;

    scanf("%d%c", &qtdPad, &tipoPad);

    scanf("%d %d", &l, &c);
    scanf("%*c");
    char matriz[l][c];
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%c", &matriz[i][j]);
        }
        scanf("%*c");
    }
    
    if (tipoPad == 'V')
        qtd = ContaPadraoVertical(qtdPad, l, c, matriz);
    else 
        qtd = ContaPadraoHorizontal(qtdPad, l, c, matriz);

    printf("CONT: %c %d\n", tipoPad, qtd);

    return 0;
}