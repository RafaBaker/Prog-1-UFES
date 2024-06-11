#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int x;
    int y;
}tPonto;

tPonto InicializaRobo();

tPonto LeCoordenada();

int EstaNoInicio(tPonto coordenada);

int CalculaDistanciaX(tPonto p1, tPonto p2);

int CalculaDistanciaY(tPonto p1, tPonto p2);

tPonto MoveRoboX(tPonto robo, int dist, int l, int c, int placa[l][c]);

tPonto MoveRoboY(tPonto robo, int dist, int l, int c, int placa[l][c]);

void ImprimePlaca(int l, int c, int placa[l][c]);

int main ()
{
    int i, j, l, c;
    int distanciaX, distanciaY;
    tPonto robo;
    tPonto coordenada;
    scanf("%d %d", &c, &l);
    int placa[l][c];
    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
            placa[i][j] = 0;

    robo = InicializaRobo();
    while (1)
    {
        coordenada = LeCoordenada();

        distanciaX = CalculaDistanciaX(robo, coordenada);
        distanciaY = CalculaDistanciaY(robo, coordenada);

        if (abs(distanciaX) <= abs(distanciaY))
        {
            robo = MoveRoboX(robo, distanciaX, l, c, placa);
            robo = MoveRoboY(robo, distanciaY, l, c, placa);
        }
        else 
        {
            robo = MoveRoboY(robo, distanciaY, l, c, placa);
            robo = MoveRoboX(robo, distanciaX, l, c, placa);
        }

        if (EstaNoInicio(coordenada)) break;
    }

    

    ImprimePlaca(l, c, placa);

    return 0;
}

tPonto InicializaRobo()
{
    tPonto robo;

    robo.x = 0;
    robo.y = 0;

    return robo;
}

tPonto LeCoordenada()
{
    tPonto coordenada;

    scanf("%d %d", &coordenada.x, &coordenada.y);

    return coordenada;
}

int EstaNoInicio(tPonto coordenada)
{
    return coordenada.x == 0 && coordenada.y == 0;
}

int CalculaDistanciaX(tPonto p1, tPonto p2)
{
    int distancia = p2.x - p1.x;
    
    return distancia;
}

int CalculaDistanciaY(tPonto p1, tPonto p2)
{
    int distancia = p2.y - p1.y;
    
    return distancia;
}

tPonto MoveRoboX(tPonto robo, int dist, int l, int c, int placa[l][c])
{
    int i, j;
    i = robo.y;
    j = robo.x;

    if (dist > 0)
    {
        for (; j <= (robo.x+dist); j++)
        {
            placa[i][j] = 1;
            // ImprimePlaca(l, c, placa);
            // printf("\n");
        }
    }
    else 
    {
        for (; j >= (robo.x+dist); j--)
        {
            placa[i][j] = 1;
            // ImprimePlaca(l, c, placa);
            // printf("\n");
        }
    }

    robo.x = robo.x + dist;
    return robo;
}

tPonto MoveRoboY(tPonto robo, int dist, int l, int c, int placa[l][c])
{
    int i, j;
    i = robo.x;
    j = robo.y;

    if (dist > 0)
    {
        for (; j <= (robo.y+dist); j++)
        {
            placa[j][i] = 1;
            // ImprimePlaca(l, c, placa);
            // printf("\n");
        }
    }
    else 
    {
        for (; j >= (robo.y+dist); j--)
        {
            placa[j][i] = 1;
            // ImprimePlaca(l, c, placa);
            // printf("\n");
        }
    }

    robo.y = robo.y + dist;
    return robo;
}

void ImprimePlaca(int l, int c, int placa[l][c])
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", placa[i][j]);
        }
        printf("\n");
    }
}
