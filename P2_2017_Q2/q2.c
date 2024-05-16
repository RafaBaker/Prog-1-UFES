#include <stdio.h>
#include <math.h>

int EhIgual(int a, int b) 
{
    if (a == b) return 1;
    else return 0;
}

int InverteNumero(int num)
{
    int qtdDig = 0;
    int dig = 0;
    int pot = 0;
    int new = 0;
    int i = 0;

    if (num < 10)
    {
        return num;
    }
    else 
    {
        qtdDig = log10(num);

        while (num > 0)
        {
            dig = num % 10;
            num /= 10;

            new += dig * pow(10,qtdDig);
            qtdDig = log10(num);
        }

        return new;
    }

}

int main ()
{
    int n = 0, inverso = 0, qtdP = 0;
    char c = '\0';

    while (1)
    {
        scanf("%d%c", &n, &c);
        inverso = InverteNumero(n);
        if (EhIgual(n, inverso)) qtdP++;

        if (c != ' ') break;
    }
    printf("COUNT:%d", qtdP);

    return 0;
}