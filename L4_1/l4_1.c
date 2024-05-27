#include <stdio.h>

typedef struct
{
    int codigo;
    float preco;
    int qtd;
} tProduto;

tProduto  LeProduto()
{
    tProduto p;

    scanf("%d;%f;%d", &p.codigo, &p.preco, &p.qtd);

    return p;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2)
{
    if (p1.preco > p2.preco)
        return 1;
    else 
        return 0;
}

int EhProduto1MenorQ2(tProduto p1,  tProduto  p2)
{
    if (p1.preco < p2.preco)
        return 1;
    else 
        return 0;
}

int  TemProdutoEmEstoque(tProduto  p)
{
    return p.qtd;
}

void ImprimeProduto(tProduto p)
{
    printf("COD %d, ", p.codigo);
    printf("PRE %.2f, ", p.preco);
    printf("QTD %d\n", p.qtd);
}

int main ()
{
    int n, i = 0;
    int inicio = 1;
    tProduto produto;
    tProduto menorProduto;
    tProduto maiorProduto;

    scanf("%d", &n);

    for(; i < n; i++)
    {
        produto = LeProduto();
        if (inicio)
        {
            menorProduto = produto;
            maiorProduto = produto;
            inicio = 0;
        }

        if (!(TemProdutoEmEstoque(produto))) 
        {
            printf("FALTA:");
            ImprimeProduto(produto);
        }

        if (EhProduto1MaiorQ2(produto, maiorProduto)) 
            maiorProduto = produto;
        
        if (EhProduto1MenorQ2(produto, menorProduto))
            menorProduto = produto;

    }

    printf("MAIOR:");
    ImprimeProduto(maiorProduto);
    printf("MENOR:");
    ImprimeProduto(menorProduto);

    return 0;
}