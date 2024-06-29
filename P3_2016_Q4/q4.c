#include <stdio.h>

int main () {

    int qtdCasos = 0;
    int qtdEle = 0;
    int i, j, k;
    int qtdMaiores = 0;
    scanf("%d", &qtdCasos);
    for (i = 0; i < qtdCasos; i++)
    {
        scanf("%d", &qtdEle);
        int vet[qtdEle];
        for (j = 0; j < qtdEle; j++)
        {
            scanf("%d", &vet[j]);
        }
        for (j = 0; j < qtdEle; j++)
        {
            qtdMaiores = 0;
            for (k = 0; k < qtdEle; k++)
            {
                if (vet[j] < vet[k])
                    qtdMaiores++;
            }
            printf("%d ", qtdMaiores);
        }
        printf("\n");
    }

    return 0;
}