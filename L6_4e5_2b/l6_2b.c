#include <stdio.h>

#define MAX_DIMENSAO 6
#define MAX_CARTELAS 100

// CARTELAS
typedef struct
{
    int id;
    int dimensao;
    int tabela[MAX_DIMENSAO][MAX_DIMENSAO];
} tCartela;

tCartela LeCartela();

void ImprimeCartela(tCartela cartela);

// PARTIDAS
typedef struct
{
    tCartela cartelas[MAX_CARTELAS];
    int qtd;
} tPartida;

tPartida LeCartelasPartida();

void ImprimeInvCartelasPartida(tPartida partida);

int main()
{
    tPartida partida;

    partida = LeCartelasPartida();

    ImprimeInvCartelasPartida(partida);

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

void ImprimeCartela(tCartela cartela)
{
    int i, j;

    printf("ID:%d\n", cartela.id);

    for (i = 0; i < cartela.dimensao; i++)
    {
        for (j = 0; j < cartela.dimensao; j++)
        {
            printf("%03d", cartela.tabela[i][j]);
            if (j + 1 != cartela.dimensao)
                printf("|");
        }
        printf("\n");
    }
}

tPartida LeCartelasPartida()
{
    tPartida partida;
    tCartela cartela;
    int i;

    scanf("%d", &partida.qtd);

    for (i = 0; i < partida.qtd; i++)
    {
        cartela = LeCartela();
        partida.cartelas[i] = cartela;
    }

    return partida;
}

void ImprimeInvCartelasPartida(tPartida partida)
{
    int i;
    for (i = partida.qtd-1; i >= 0; i--)
    {
        ImprimeCartela(partida.cartelas[i]);
    }
}