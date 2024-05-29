#include <stdio.h>

void leVetor(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &v[i]);
    }
}

int ComparaVetores(int a[], int tamA, int b[], int tamB)
// 0 - NENHUM
//1 - PARCIAL
//2 - TOTAL
{
    int i, j;
    int qtdIgual = 0;

    for (i = 0; i < tamA; i++)
    {
        for (j = 0; j < tamB; j++)
        {
            if (a[i] == b[j])
            {
                qtdIgual++;
                break;
            }
        }
    }

    if (qtdIgual == tamA)
        return 2;
    else if (!(qtdIgual))
        return 0;
    else
        return 1;
}

int main ()
{
    int n1, n2;
    int rtn = 0;

    scanf("%d", &n1);
    int a[n1];
    leVetor(a, n1);
    scanf("%d", &n2);
    int b[n2];
    leVetor(b, n2);

    rtn = ComparaVetores(a, n1, b, n2);
    switch (rtn)
    {
    case 0:
        printf("NENHUM");
        break;
    case 1:
        printf("PARCIAL");
        break;
    case 2:
        printf("TODOS");
        break;
    default:
        break;
    }

    return 0;
}