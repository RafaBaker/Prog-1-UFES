#include <stdio.h>

int main () {

    int linha1, coluna1;
    int linha2, coluna2;
    int i, j;
    int i2, j2;
    int qtd = 0;
    int flag;

    scanf("%d %d", &linha1, &coluna1);
    int original[linha1][coluna1];
    for (i = 0; i < linha1; i++)
    {
        for (j = 0; j < coluna1; j++)
            scanf("%1d", &original[i][j]);
    }

    scanf("%d %d", &linha2, &coluna2);
    int erro[linha2][coluna2];
    for (i = 0; i < linha2; i++)
    {
        for (j = 0; j < coluna2; j++)
            scanf("%1d", &erro[i][j]);
    }

    for (i = 0; i <= linha1-linha2; i++)
    {
        for (j = 0; j <= coluna1-coluna2; j++)
        {
            flag = 1;
            for (i2 = 0; i2 < linha2 && flag; i2++)
            {
                for (j2 = 0; j2 < coluna2 && flag; j2++)
                {
                    if (erro[i2][j2] != original[i+i2][j+j2])
                        flag = 0;
                }
            }
            if (flag)
                qtd++;
        }
    }
    printf("RESP:%d", qtd);

    return 0;
}