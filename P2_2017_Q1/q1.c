#include <stdio.h>

int main ()
{
    int pos = 0, menor = 99999;
    int i = 0, n = 0, num = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        scanf("%d", &num);
        if (num < menor)
        {
            menor = num;
            pos = i;
        }
    }

    if (pos != 0) printf("POS:%d", pos);

    return 0;
}