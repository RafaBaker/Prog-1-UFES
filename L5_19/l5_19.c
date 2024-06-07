#include <stdio.h>

#define TERRA '0';
#define AGUA '1';

void imprimeMatriz(int l, int c, char matriz[l][c]);

void imprimeQuantidadeTerra(int l, int c, char matriz[l][c]);

void preencheBorda(int l, int c, char matriz[l][c]);

int main () {

    int nH, w, h;
    int i, j;
    char c;

    scanf("%d", &nH);
    scanf("%d %d", &w, &h);
    scanf("%*c");

    char terreno[h][w];

    for (i = 0; i < h; i++)
    {
        for (j = 0; j <= w ;j++)
        {
            scanf("%c", &c);
            if (c != '\n') terreno[i][j] = c;
        }
    }
    // imprimeMatriz(h, w, terreno);
    // printf("\n");

    imprimeQuantidadeTerra(h, w , terreno);
    printf(" ");
    
    for (i = 0; i < nH; i++)
    {
        preencheBorda(h, w, terreno);
        // imprimeMatriz(h, w, terreno);
        // printf("\n");
    }
    imprimeQuantidadeTerra(h, w, terreno);
    printf("\n");

    return 0;
}


void imprimeMatriz(int l, int c, char matriz[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimeQuantidadeTerra(int l, int c, char matriz[l][c])

{
    int i, j;
    int qtdTerra = 0;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (matriz[i][j] == '0') qtdTerra++;
        }
    }
    printf("%d", qtdTerra);
}

void preencheBorda(int l, int c, char matriz[l][c])
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        if (i == 0) continue;
        if (i == l-1) continue;
        for (j = 0; j < c; j++)
        {
            if (j == 0) continue;
            if (j == c-1) continue;

            if (matriz[i][j] == '0')
            {
                if (matriz[i+1][j] == '1' || matriz[i-1][j] == '1' || matriz[i][j+1] == '1'|| matriz[i][j+-1] == '1')
                    matriz[i][j] = '2';
            }
        }
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (matriz[i][j] == '2') 
                matriz[i][j] = '1';
        }
    }
}
