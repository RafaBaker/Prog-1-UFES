#include <stdio.h>

int main () {

    int linhas = 0, colunas = 0;
    int i, j;
    int i2, j2;
    int flag;
    int qtd = 0;
    scanf("%d %d", &colunas, &linhas);
    int mapa[linhas][colunas];
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            scanf("%1d", &mapa[i][j]);
        }
    }

    for (i = 1; i < linhas-1; i++)
    {
        for (j = 1; j < colunas-1; j++)
        {
            // printf("posição: %d %d\n", i, j);
            if (mapa[i][j] == 1)
                continue;
            //Checando a borda
            flag = 1;
            for (i2 = i-1; i2 <= i+1 && flag; i2++)
            {
                for (j2 = j-1; j2 <= j+1 && flag; j2++)
                {
                    // printf("posição: %d %d\n", i2, j2);
                    if (mapa[i2][j2])
                    {
                        // printf("agua!\n");
                        flag = 0;
                    }
                }
            }

            if (!flag)
                qtd++;
        }
    }
    printf("%d\n", qtd);
  
    return 0;
}