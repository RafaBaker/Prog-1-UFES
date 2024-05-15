#include <stdio.h>

int checaMaiorHora (int h1, int h2, int m1, int m2, int s1, int s2)
{
    int result = -1;

    if (h1 > h2) result = 1;
    else if (h2 > h1) result = 2;
    else if (m1 > m2) result = 1;
    else if (m2 > m1) result = 2;
    else if (s1 > s2) result = 1;
    else if (s2 > s1) result = 1;
    else result = 0;

    return result;

}

int main ()
{
    int h1 = 0, h2 = 0, m1 = 0, m2 = 0, s1 = 0, s2 = 0;
    int soma = 0, dezena = 0;
    int flag = -1;

    scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

    flag = checaMaiorHora(h1, h2, m1, m2, s1, s2);
    if (flag == 0)
    {
        printf("IGUAIS");
    }
    else
    {
        if (flag==1)
        {
            soma = h1+ m1+ s1;
        }
        else if (flag == 2)
        {
            soma = h2+ m2+ s2;
        }

        if (soma >= 10) {
            dezena = soma / 10;
            if (dezena >= 10)
            {
                dezena = dezena % 10;
            }
        }

        printf("RESP:%d", dezena);
    }



    return 0;
}