
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

void ImprimeMultiplos(int num, int max) 
{
    int i = num+1;
    int resto = -1;
    int qtdmulti = 0;

    for (; i < max; i++)
    {
        resto = i % num;
        if (resto == 0) 
        {
            printf("%d ", i);
            qtdmulti++;
        }
    }
    if (qtdmulti == 0) printf("*\n");
    else printf("\n");
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
            printf("%d\n", i);
            ImprimeMultiplos(i, n);
        }
    }

    return 0;
}