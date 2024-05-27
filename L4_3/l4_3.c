#include <stdio.h>


typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

int EhBissexto(int ano)
{
    if (!(ano % 400)) return 1;
    if (!(ano % 100)) return 0;
    if (!(ano % 4)) return 1;
    return 0;
}

int CalculaDiasMes(int mes, int ano)
{
    if (mes == 2)
    {
        if (EhBissexto(ano))
            return 29;
        else return 28;
    }
    if (mes == 4 || mes == 6 || mes == 9|| mes == 11)
        return 30;

    return 31;
}

tData AvancaData(tData d)
{
    int qtdDiasMes;

    qtdDiasMes = CalculaDiasMes(d.mes, d.ano);
    if (d.dia < qtdDiasMes)
        d.dia++;
    else
    {
        d.dia = 1;
        if (d.mes < 12)
            d.mes++;
        else
        {
            d.mes = 1;
            d.ano++;
        }
    }

    return d;
}

int EhIgual (tData d1, tData d2)
{
    return d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano;
}


tData LeData()
{
    int d, m, a;
    int qtdDiasMes;
    tData data;
    scanf("%d %d %d", &d, &m, &a);

    if (m > 12)
        m = 12;

    if (m < 1)
        m = 1;

    qtdDiasMes = CalculaDiasMes(m, a);
    if (d > qtdDiasMes)
        d = qtdDiasMes;

    data.dia = d;
    data.mes = m;
    data.ano = a;

    return data;
}

tData ImprimeData(tData d)
{
    printf("'%02d/%02d/%04d'", d.dia, d.mes, d.ano);
}

int main ()
{
    int qtd, i;
    tData data;

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++)
    {
        data = LeData();
        ImprimeData(data);
        if (EhBissexto(data.ano))
        {
            printf(":Bisexto\n");
        }
        else 
        {
            printf(":Normal\n");
        }
    }

    return 0;
}