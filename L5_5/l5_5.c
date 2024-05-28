#include <stdio.h>

int AchaNumeroVetor(int v[], int tam, int x)
{
    int rtn = 0;
    int i;
    for (i = 0; i < tam; i++)
    {
        if (v[i] == x)
            return i;
    }
    return tam;
}

int main ()
{
    int x, n, i, resp = 0;
    scanf("%d %d", &x, &n);
    int v[n];
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);

    resp = AchaNumeroVetor(v, n, x);
    printf("RESP:%d", resp);

    return 0;
}