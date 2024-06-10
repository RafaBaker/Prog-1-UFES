#include <stdio.h>

#define MAX_CARTELA 6

typedef struct
{
    int id;
    int dimensao;
    int tabela[MAX_CARTELA][MAX_CARTELA];
} tCartela;


tCartela LeCartela();

void ImprimeCartela(tCartela  cartela);

int main()
{
    tCartela cartela;

    cartela = LeCartela();

    ImprimeCartela(cartela);

    return 0;
}

tCartela LeCartela()
{
    int i, j, num;
    tCartela cartela;
    
    scanf("%d %d", &cartela.id, &cartela.dimensao);

    for (i = 0; i < cartela.dimensao; i++)
    {
        for (j = 0; j < cartela.dimensao; j++)
        {
            scanf("%d", &num);
            cartela.tabela[j][i] = num;
        }
    }

    return cartela;
}

void ImprimeCartela(tCartela  cartela)
{
    int i, j;

    printf("ID:%d\n", cartela.id);

    for (i = 0; i < cartela.dimensao; i++)
    {
        for (j = 0; j < cartela.dimensao; j++)
        {
            printf("%03d", cartela.tabela[i][j]);
            if (j+1 != cartela.dimensao)
                printf("|");
        }
        printf("\n");
    }
}