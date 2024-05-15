#include <stdio.h>

int verificapH(float  pH)
{
    int result = 0;
    if (pH == 7.0)
    {
        result = 0;
    }
    else if (pH > 7.0)
    {
        result = 2;
    }
    else if (pH < 7.0)
    {
        result = 1;
    }

    return result;
}

int verificaGotaChuvaAcida(float pH)
{
    int result = 0;

    if (pH < 5.7)
    {
        result = 1;
    }

    return result;
}

float porcentagem(float  total, float  valor)
{
    float result = 0;

    result = (valor / total)*100;

    return result;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal)
{
    if (porcentagemGotasChuvaAcida >= 75.00)
    {
        printf("Chuva Acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
    else if (porcentagemGotasChuvaNormal >= 75.00)
    {
        printf("Chuva Normal %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
    else 
    {
        printf("Chuva com indicios de chuva acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
}

int main ()
{
    int a = 0, d = 0, t = 0;
    float p = 0.00;
    int qtdGotas = 0;
    int qtdGotasAcidas = 0, qtdGotasBasicas = 0, qtdGotasNeutras = 0;
    float maisNeutro = 14.00, maisAcido = 14.00, maisBasico = 0.00;
    float difNeutro = 0.0, difMaisNeutro = 14.0;
    int result = -1;
    int i = 1;
    float porcAcido = 0.0, porcNormal = 0.0, qtdChuvaAcida = 0.0;

    scanf("%d %d %d", &a, &d, &t);
    qtdGotas = a*d*t;
    for (;i<=qtdGotas;i++)
    {
        scanf("%f", &p);
        result = verificapH(p);
        difNeutro = 7.00-p;
        if (difNeutro < 0) difNeutro *= -1.0;
        if (difNeutro < difMaisNeutro) 
        {
            maisNeutro = p;
            difMaisNeutro = difNeutro;
        }
            //tem alguma coisa errada aqui
        if (p < maisAcido) maisAcido = p;
        if (p > maisBasico) maisBasico = p;
        switch (result)
        {
            case 0:
                qtdGotasNeutras += 1;
                break;
            case 1:
                qtdGotasAcidas += 1;  
                break;
            case 2:
                qtdGotasBasicas += 1;
                break;
        }

        if (verificaGotaChuvaAcida(p)) qtdChuvaAcida+=1.0;
    }

    if (qtdGotas == 0)
    {
        printf("Nenhuma gota foi avaliada");
    }
    else 
    {
        printf("%d %d %d ", qtdGotasAcidas, qtdGotasBasicas, qtdGotasNeutras);
        printf("%.2f %.2f %.2f\n", maisAcido, maisBasico, maisNeutro);

        // tenho que arredondar as porcentagens
        porcAcido = porcentagem((float)qtdGotas, qtdChuvaAcida);
        porcNormal = 100.00 - porcAcido;
        imprimeResultadosAnalise(porcAcido, porcNormal);
    }

    return 0;
}