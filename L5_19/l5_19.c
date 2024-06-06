#include <stdio.h>

#define TERRA '0';
#define AGUA '1';

void imprimeMatriz(int l, int c, char matriz[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main () {

    int nH, w, h;

    scanf("%d", &nH);
    scanf("%d %d", &w, &h);

    char terreno[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w ;j++)
        {
            scanf("%c", &terreno[h][j]);
        }
    }
    imprimeMatriz(h, w, terreno);

    return 0;
}
