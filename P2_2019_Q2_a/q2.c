#include <stdio.h>

int EhFinalDaLista(int buraco) 
{
    int result = 0;
    if (buraco == -1) result = 1;
    else result = 0;

    return result;
}

int EcontraMaiorBuraco() 
{
    int maior = 0;
    int buraco = 0;

    while (1)
    {
        scanf("%d", &buraco);

        if (EhFinalDaLista(buraco)) break; 
        else if (buraco > maior) maior = buraco;
    }

    return maior;
}

int ContaEsferasGrandes(int maiorBuraco) 
{   
    int qtd = 0;
    int esfera = 0;

    while (1)
    {
        scanf("%d", &esfera);
        
        if (EhFinalDaLista(esfera)) break;
        else if (esfera >= maiorBuraco) qtd++; 
    }
    
    return qtd;
}

int main () 
{

    int buracomaior = 0;
    int qtd = 0;
    
    buracomaior = EcontraMaiorBuraco();
    qtd = ContaEsferasGrandes(buracomaior);
    printf("QTD:%d\n", qtd);

    return 0;
}