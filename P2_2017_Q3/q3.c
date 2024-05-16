#include <stdio.h>

int QtdDebitoPlaca(int presc)
{
    int debito = 0;
    int debitoTotal = 0;
    int anos = 0;
    char c = '\0';

    while (1)
    {   
        //tirando o '('
        scanf("%c", &c);
        if (c=='\n') break;
        scanf("%d", &debito);
        //tirando o ':'
        scanf("%*c");
        scanf("%d", &anos);
        //tirando o ')'
        scanf("%*c");
        if (anos <= presc) debitoTotal += debito;
    }

    return debitoTotal;
}

int MaiorDebitoCidade()
{
    int p = 0;
    char c1 = '\0', c2 = '\0', c3 = '\0';
    int debito = 0, maiorDebito = 0;
    char maiorC1 = '\0', maiorC2 = '\0', maiorC3 = '\0';

    scanf("%d", &p);
    //jogando o \n fora
    scanf("%*c");
    while (1)
    {
        scanf("%c%c%c", &c1 , &c2 , &c3);
        if (c1 == 'F' && c2 == 'I' && c3 == 'M') break;
        debito = QtdDebitoPlaca(p);
        if (debito > maiorDebito)
        {
            maiorDebito = debito;
            maiorC1 = c1;
            maiorC2 = c2; 
            maiorC3 = c3;
        }
    }

    if (maiorDebito == 0)
    {
        printf("SEM DEBITO!\n");
        return 0;
    }
    else
    {
        printf("PLACA:%c%c%c DEBITO:%d\n", maiorC1, maiorC2, maiorC3, maiorDebito);

    }

    return maiorDebito;
}

int main ()
{
    int n = 0;
    int maiorDebito = 0, somaDebito = 0;
    int i = 0;

    scanf("%d", &n);
    for (;i < n;i++)
    {
        maiorDebito = MaiorDebitoCidade();
        somaDebito += maiorDebito;
    }
    printf("SOMA:%d\n", somaDebito);

    return 0;
}