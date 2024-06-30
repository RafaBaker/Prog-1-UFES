#include <stdio.h>

typedef struct
{
    int id;
    int passageiros;
    char tipo[100];
    int km;

} tCarro;

tCarro LeCarro();

void  ImprimeCarro(tCarro  carro);

int  ObtemNumPassageirosCarro(tCarro  carro);

int  ObtemKmCarro(tCarro  carro);

typedef struct
{
    int qtdCarros;
    tCarro carros[100];
} tConcessionaria;

tConcessionaria LeCarrosConcessionaria();

void  ListaCarrosConcessionaria(tConcessionaria  concessionaria,  int  pass,  int  km);

int main()
{
    tConcessionaria concessionaria;

    concessionaria = LeCarrosConcessionaria();

    int qtdPassageiros, km, i = 0;
    while (scanf("%d,%d", &qtdPassageiros, &km) == 2)
    {
        printf("Caso %d:\n", ++i);
        ListaCarrosConcessionaria(concessionaria, qtdPassageiros, km);
    }

    return 0;
}

tConcessionaria LeCarrosConcessionaria()
{
    int qtdCarros;
    int i;
    tConcessionaria concessionaria;

    scanf("%d", &qtdCarros);
    concessionaria.qtdCarros = qtdCarros;

    for (i = 0; i < qtdCarros; i++)
    {
        concessionaria.carros[i] = LeCarro();
    }

    return concessionaria;
}

void  ListaCarrosConcessionaria(tConcessionaria  concessionaria,  int  pass,  int  km)
{
    int i;
    int kmCarro, passCarro;
    for (i = 0; i < concessionaria.qtdCarros; i++)
    {
        kmCarro = ObtemKmCarro(concessionaria.carros[i]);
        passCarro = ObtemNumPassageirosCarro(concessionaria.carros[i]);
        if (km == -1 && pass == -1)
        {
            ImprimeCarro(concessionaria.carros[i]);
        }
        else if (km == -1)
        {
            if (passCarro == pass)
                ImprimeCarro(concessionaria.carros[i]);
        }
        else if (pass == -1)
        {
            if (kmCarro <= km)
                ImprimeCarro(concessionaria.carros[i]);
        }
        else 
            if (kmCarro <= km && passCarro == pass)
                ImprimeCarro(concessionaria.carros[i]);
    }
}

tCarro LeCarro()
{
    tCarro carro;
    int id, km, passageiros;

    scanf("%d %d %s %d", &id, &passageiros, carro.tipo, &km);
    carro.id = id;
    carro.km = km;
    carro.passageiros = passageiros;

    return carro;
}

void  ImprimeCarro(tCarro  carro)
{
    printf("CARRO (%d): %s de %d passageiros e com %d km\n", carro.id, carro.tipo, carro.passageiros, carro.km);
}

int  ObtemNumPassageirosCarro(tCarro  carro)
{
    return carro.passageiros;
}

int  ObtemKmCarro(tCarro  carro)
{
    return carro.km;
}