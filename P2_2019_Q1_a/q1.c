#include <stdio.h>

int main () {

    int c1 = 0, c2 = 0, c3 = 0;
    int qtd = 0;
    int tipo = 0;
    int custo = 0;
    int i = 0;

    scanf("%d %d %d", &c1, &c2, &c3);
    scanf("%d", &qtd);

    for (; i < qtd; i++) 
    {
        scanf("%d", &tipo);
        switch (tipo)
        {
            case 1:
                custo += c1;
                break;
            case 2:
                custo += c2;
                break;
            case 3:
                custo += c3;
                break;
        }
    }

    printf("CUSTO:%d\n", custo);

    

    return 0;
}