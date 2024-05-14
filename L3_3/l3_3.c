
#include <stdio.h>

int EhPrimo(int num)
{
    int i = 1;
    int resto = 0;
    int qtdDiv = 0;
    int result = 0;

    for (; i <= num; i++)
    {
        resto = num % i;
        if (resto == 0) qtdDiv++; 
    }

    if (qtdDiv == 2) result = 1;
    
    return result;
}

int main () 
{

    int m = 0, n = 0;
    int i = 0;

    scanf("%d %d", &m, &n);
    i = m+1;
    for (;i<n;i++)
    {
        if (EhPrimo(i)) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}