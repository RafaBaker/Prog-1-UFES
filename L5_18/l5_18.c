#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(int l, int c, int matriz[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicaMatriz(int l1, int c1, int matriz1[l1][c1], int l2, int c2, int matriz2[l2][c2])
{
    int i, j, k= 0, mult, soma;

    if (c1 != l2)
        printf("IMPOSSIVEL\n");
    else
    {
        int matrizProduto[l1][c2];

        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                matrizProduto[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    // printf("%d\n", matrizProduto[i][j]);
                    matrizProduto[i][j] = matrizProduto[i][j] + (matriz1[i][k]*matriz2[k][j]);
                    // printf("%d\n", matrizProduto[i][j]);
                }
 
            }
        }
        imprimeMatriz(l1, c2, matrizProduto);
    }

}



int main ()
{
    int qtdPares, c1, l1, c2, l2, i, j, c;

    scanf("%d", &qtdPares);

    for (i = 0; i < qtdPares; i++)
    {
        scanf("%d %d", &c1, &l1);
        int matriz1[l1][c1];
        for (j = 0; j < l1; j++)
        {
            for (c = 0; c < c1; c++)
            {
                scanf("%d", &matriz1[j][c]);
            }
        }

        scanf("%d %d", &c2, &l2);
        int matriz2[l2][c2];
        for (j = 0; j < l2; j++)
        {
            for (c = 0; c < c2; c++)
            {
                scanf("%d", &matriz2[j][c]);
            }
        }

        multiplicaMatriz(l1, c1, matriz1, l2, c2, matriz2);
        printf("\n");
    }

    return 0;
}