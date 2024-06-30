#include <stdio.h>

typedef struct
{
    int id;
    int passageiros;
    char tipo[100];
    int km;
    int alugado;
    int cliente; 
} tCarro;

tCarro LeCarro();

void  ImprimeCarro(tCarro  carro);

int  ObtemNumPassageirosCarro(tCarro  carro);

int  ObtemKmCarro(tCarro  carro);

int ObtemClienteAlugouCarro(tCarro carro);

int EstaDisponivelCarro(tCarro carro);

tCarro AlugaCarro(tCarro carro, int cliente);

tCarro DevolveCarro(tCarro carro);

typedef struct
{
    int qtdCarros;
    tCarro carros[100];
} tConcessionaria;

tConcessionaria LeCarrosConcessionaria();

void  ListaCarrosConcessionaria(tConcessionaria  concessionaria,  int  pass,  int  km);

tConcessionaria AlugaCarroConcessionaria(tConcessionaria concessionaria, int cliente, int pass, int km);

tConcessionaria DevolveCarroConcessionaria(tConcessionaria concessionaria, int cliente);

int main()
{
    tConcessionaria concessionaria;

    concessionaria = LeCarrosConcessionaria();

    char tipo;
    int cliente, qtdPassageiros, km, i = 0;
    while (scanf("%d,%c", &cliente, &tipo) == 2)
    {
        if (tipo == 'A')
        {
            scanf("%d,%d", &qtdPassageiros, &km);
            concessionaria = AlugaCarroConcessionaria(concessionaria, cliente, qtdPassageiros, km);
        }
        if (tipo == 'D')
            concessionaria = DevolveCarroConcessionaria(concessionaria, cliente);
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

tConcessionaria AlugaCarroConcessionaria(tConcessionaria concessionaria, int cliente, int pass, int km)
{
    int i;
    int kmCarro, passCarro;
    int flag = 1;
    for (i = 0; i < concessionaria.qtdCarros && flag; i++)
    {
        kmCarro = ObtemKmCarro(concessionaria.carros[i]);
        passCarro = ObtemNumPassageirosCarro(concessionaria.carros[i]);
        if (km == -1 && pass == -1)
        {
            if (EstaDisponivelCarro(concessionaria.carros[i]))
            {
                concessionaria.carros[i] = AlugaCarro(concessionaria.carros[i], cliente);
                printf("Alugado (cliente %d) -> ", cliente);
                ImprimeCarro(concessionaria.carros[i]);
                flag = 0;
            }
        }
        else if (km == -1)
        {
            if (passCarro == pass)
                if (EstaDisponivelCarro(concessionaria.carros[i]))
                {
                    concessionaria.carros[i] = AlugaCarro(concessionaria.carros[i], cliente);
                    printf("Alugado (cliente %d) -> ", cliente);
                    ImprimeCarro(concessionaria.carros[i]);
                    flag = 0;
                }
        }
        else if (pass == -1)
        {
            if (kmCarro <= km)
                if (EstaDisponivelCarro(concessionaria.carros[i]))
                {
                    concessionaria.carros[i] = AlugaCarro(concessionaria.carros[i], cliente);
                    printf("Alugado (cliente %d) -> ", cliente);
                    ImprimeCarro(concessionaria.carros[i]);
                    flag = 0;
                }

        }
        else 
            if (kmCarro <= km && passCarro == pass)
                if (EstaDisponivelCarro(concessionaria.carros[i]))
                {
                    concessionaria.carros[i] = AlugaCarro(concessionaria.carros[i], cliente);
                    printf("Alugado (cliente %d) -> ", cliente);
                    ImprimeCarro(concessionaria.carros[i]);
                    flag = 0;
                }
    }
    if (flag)
        printf("Carro Indisponivel\n");

    return concessionaria;
}

tConcessionaria DevolveCarroConcessionaria(tConcessionaria concessionaria, int cliente)
{
    int i;
    int carroCliente;
    int flag =1;
    for (i = 0; i < concessionaria.qtdCarros && flag; i++)
    {
        carroCliente = ObtemClienteAlugouCarro(concessionaria.carros[i]);
        if (carroCliente == cliente)
        {
            concessionaria.carros[i] = DevolveCarro(concessionaria.carros[i]);
            printf("Devolvido (cliente %d) -> ", cliente);
            ImprimeCarro(concessionaria.carros[i]);
            flag = 0;
        }
    }
    return concessionaria;
}

tCarro LeCarro()
{
    tCarro carro;
    int id, km, passageiros;

    scanf("%d %d %s %d", &id, &passageiros, carro.tipo, &km);
    carro.id = id;
    carro.km = km;
    carro.passageiros = passageiros;
    carro.alugado = 0;
    carro.cliente = 0;
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

int ObtemClienteAlugouCarro(tCarro carro)
{
    return carro.cliente;
}

//1 para disponivel, 0 para indisponivel
int EstaDisponivelCarro(tCarro carro)
{
    return !carro.alugado;
}

tCarro AlugaCarro(tCarro carro, int cliente)
{
    carro.alugado = 1;
    carro.cliente = cliente;

    return carro;
}

tCarro DevolveCarro(tCarro carro)
{
    carro.alugado = 0;
    carro.cliente = 0;
    return carro;
}