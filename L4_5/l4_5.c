#include <stdio.h>
#include <math.h>

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

int DeltaX(int x1, int x2)
{
    return x2-x1;
}

int DeltaY(int y1, int y2)
{
    return y2-y1;
}

float DistanciaPontos(tPonto p1, tPonto p2)
{
    float dist = 0;
    int soma = 0;
    int deltaX, deltaY;

    deltaX = DeltaX(p1.x, p2.x);
    deltaY = DeltaY(p1.y, p2.y);

    deltaX = pow(deltaX, 2);
    deltaY = pow(deltaY, 2);
    soma = deltaX + deltaY;

    dist = sqrt(soma);

    return dist;
}

int identificaQuadrante(tPonto p)
{
    if (p.x == 0 || p.y == 0) return 0;
    else if (p.x > 0 && p.y > 0) return 1;
    else if (p.x < 0 && p.y > 0) return 2;
    else if (p.x < 0 && p.y < 0) return 3;
    else if (p.x > 0 && p.y < 0) return 4;
}

tPonto pontoSimetrico(tPonto p)
{
    tPonto simetrico;

    simetrico = p;
    
    simetrico = AlteraAbscissa(simetrico);
    simetrico = AlteraOrdenada(simetrico);

    return simetrico;
}

tPonto LePonto()
{
    int x, y;
    tPonto ponto;

    scanf("%d %d", &x, &y);
    ponto.x = x;
    ponto.y = y;

    return ponto;
}

void ImprimePonto(tPonto p)
{
    printf("(%d,%d) ", p.x, p.y);
}

int main ()
{
    tPonto pAtual, pAnt;
    int n = 0, i;
    float distancia = 0;
    int inicio = 1;

    scanf("%d", &n);
    for (i = 0; i < n;i++) 
    {
        if (inicio)
        {
            pAnt = LePonto();
            printf("-\n");
            inicio = 0;
            continue;
        }

        pAtual = LePonto();
        distancia = DistanciaPontos(pAtual, pAnt);
        printf("%.2f\n", distancia);

        pAnt = pAtual;
    }

    return 0;
}