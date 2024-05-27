#include <stdio.h>

typedef struct 
{
    int x;
    int y;
} tPonto;

tPonto InicializaPonto(int x, int y)
{
    tPonto ponto;

    ponto.x = x;
    ponto.y = y;

    return ponto; 
}

tPonto AlteraAbscissa(tPonto p)
{
    p.x = p.x * (-1);
    return p;
} 

tPonto AlteraOrdenada(tPonto p)
{
    p.y = p.y * (-1);
    return p;
}

int ObtemAbscissa(tPonto p)
{
    return p.x;
}

int ObtemOrdenada(tPonto p)
{
    return p.y;
}

int Dleta

void LePonto()
{
    int x, y;

    scanf("%d %d", &x, &y);
}

void ImprimePonto(tPonto p)
{
    printf("(%d,%d)", ponto.x, ponto.y);
}

int main ()
{
    tPonto p;

    return 0;
}