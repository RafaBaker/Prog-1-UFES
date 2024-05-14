#include <stdio.h>
#include <stdlib.h>

int verificaNegativo(int n)
{
    int result = 0;
    if (n < 0) result = 1;

    return result;
}

int verificaPrimo(int n)
{
    int i = 1;
    int resto = 0;
    int qtdDiv = 0;
    int result = 0;

    if (verificaNegativo(n)) n = abs(n);

    for (; i <= n; i++)
    {
        resto = n % i;
        if (resto == 0) qtdDiv++; 
    }

    if (qtdDiv == 2) result = 1;
    
    return result;
}

int transformaPrimo(int n)
{
    int result = 0;
    int i = 0;

    if (verificaNegativo(n))
    {
        for (i = n; ;i--)
        {
            if (verificaPrimo(i)) 
            {
                result = i;
                break;
            }
        }
    }
    else
    {
        for (i = n; ;i++)
        {
            if (verificaPrimo(i))
            {
                result = i;
                break;
            }
        }
    }


    return result;
}


int main () {

    int l = 0, c = 0, i = 0, j = 0, v = 0;
    int primo = 0;

    scanf("%d %d", &l, &c);
    for (i = 1; i <= l; i++) 
    {
        printf("\t");
        for (j = 1; j <= c; j++) 
        {
            scanf("%d", &v);
            if (verificaPrimo(v)) printf("%d ", v);
            else 
            {
                primo = transformaPrimo(v);
                if (primo > 32000 || primo < -32000) printf("%d ", v);
                else printf("%d ", primo);
            }
        }
        printf("\n");
    }

    return 0;
}