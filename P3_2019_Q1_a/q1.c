#include <stdio.h>

int main () {

    int qtd1, qtd2;
    int i, j;

    scanf("%d", &qtd1);
    int list1[qtd1];
    for (i = 0; i < qtd1; i++)
    {
        scanf("%d", &list1[i]);
    }

    scanf("%d", &qtd2);
    int list2[qtd2];
    for (i = 0; i < qtd2; i++)
    {
        scanf("%d", &list2[i]);
    }

    printf("PARES:\n");
    for (i = 0, j = 0; i < qtd1; i++)
    {
        printf("%d - %d\n", list1[i], list2[j]);
        j++;
        if (j == qtd2)
            j = 0;
    }

    return 0;
}