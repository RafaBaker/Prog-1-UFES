#include <stdio.h>

#define MAX_DIMENSAO 6
#define MAX_CARTELAS 100
#define MARCACAO 0
#define TRUE 1
#define FALSE 0

// CARTELAS
typedef struct
{
    int id;
    int dimensao;
    int tabela[MAX_DIMENSAO][MAX_DIMENSAO];
    int tabelaOriginal[MAX_DIMENSAO][MAX_DIMENSAO];
    int limpa;
} tCartela;

tCartela LeCartela();

void ImprimeCartela(tCartela cartela);

void MarcaCartela(int num, tCartela cartela);

int VenceuCartela(tCartela cartela);

tCartela ResetaCartela(tCartela cartela);

int EstaLimpa(tCartela cartela);

// PARTIDAS
typedef struct
{
    tCartela cartelas[MAX_CARTELAS];
    int qtd;
    int acabou;
    //index das cartelas vencedoras
    int cartelasVencedoras[MAX_CARTELAS];
    int qtdCartelasVencedoras;
} tPartida;

tPartida LeCartelasPartida();

void ImprimeCartelasVencedoras(tPartida partida);

tPartida ResetaPartida(tPartida partida);

void JogaPartida(tPartida partida);

int main()
{
    tPartida partida;
    int qtdPartidas, i;

    partida = LeCartelasPartida();

    scanf("%d", &qtdPartidas);
    for (i = 0; i < qtdPartidas; i++)
    {
        if (i != 0)
            printf("\n");
        printf("PARTIDA %d\n", i + 1);
        partida = ResetaPartida(partida);
        JogaPartida(partida);
    }
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
            cartela.tabelaOriginal[j][i] = num;
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

void MarcaCartela(int num, tCartela cartela)
{
    int i, j;
    for (i = 0; i < cartela.dimensao; i++)
        for (j = 0; j < cartela.dimensao; j++)
            if (num == cartela.tabela[i][j])
            {
                cartela.tabela[i][j] = MARCACAO;
                cartela.limpa = FALSE;
            }
}

int VenceuCartela(tCartela cartela)
{
    int i, j;
    int venceu = TRUE;
    for (i = 0; i < cartela.dimensao; i++)
        for (j = 0; j < cartela.dimensao; j++)
            if (cartela.tabela[i][j] != MARCACAO)
                venceu = FALSE;
    return venceu; 
}

tCartela ResetaCartela(tCartela cartela)
{
    int i, j;
    tCartela cartelaLimpa;

    for (i = 0; i < cartela.dimensao; i++)
        for (j = 0; j < cartela.dimensao; j++)
            cartelaLimpa.tabela[i][j] = cartela.tabelaOriginal[i][j];

    return cartelaLimpa;

}

int EstaLimpa(tCartela cartela)
{
    return cartela.limpa;
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

        partida.cartelasVencedoras[i] = -1;
    }
    partida.qtdCartelasVencedoras = 0;
    partida.acabou = FALSE;

    return partida;
}

void ImprimeCartelasVencedoras(tPartida partida)
{
    int i, v;
    tCartela cartelaLimpa;
    if (partida.qtdCartelasVencedoras == 0)
        printf("SEM VENCEDOR\n");
    else
    {
        printf("COM VENCEDOR\n");
        for (i = 0; i < partida.qtdCartelasVencedoras; i++)
        {
            v = partida.cartelasVencedoras[i];
            cartelaLimpa = ResetaCartela(partida.cartelas[v]);
            ImprimeCartela(cartelaLimpa);
        }
    }
}

tPartida ResetaPartida(tPartida partida)
{
    int i;
    tPartida partidaResetada;

    for (i = 0; i < partida.qtd; i++)
    {
        if (!(EstaLimpa(partida.cartelas[i])))
            ResetaCartela(partida.cartelas[i]);
    }

    for (i = 0; i < partida.qtdCartelasVencedoras; i++)
    {
        partida.cartelasVencedoras[i] = -1;
    }
    partida.qtdCartelasVencedoras = 0;

    
}

void JogaPartida(tPartida partida)
{
    int i ,j = 0, num, venceu = FALSE;
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
            break;
        
        if (venceu) 
            continue;

        for (i = 0; i < partida.qtd; i++)
        {
            MarcaCartela(num, partida.cartelas[i]);
            if (VenceuCartela(partida.cartelas[i]))
                partida.cartelasVencedoras[j] = i;
                j++;
                venceu = TRUE;
        }
        partida.qtdCartelasVencedoras = j;
    }

    ImprimeCartelasVencedoras(partida);
}

