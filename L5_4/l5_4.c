#include <stdio.h>

int main ()
{
    int n, i, j;
    int a, b;
    int qtdDentro = 0, qtdFora = 0;
    int dentro = 0; 
    scanf("%d", &n);

    int v[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d %d", &a, &b);

    for(i = 0; i < n; i++)
    {
        for (j = a; j <= b; j++)
        {
            if (j == v[i])
            {
                dentro = 1;
                break;
            }
        }

        if (dentro)
            qtdDentro++;
        else
            qtdFora++;
        
        dentro = 0;
    }
    printf("%d %d", qtdDentro, qtdFora);

    return 0;
}