#include <stdio.h>

int main () {

    int t = 0, m = 0;
    int i = 0;
    int qtdVaz = 0, qtdCif = 0;

    scanf("%d %d", &t, &m);

    // Parte de cima do diamante
    qtdCif = t;
    for (;;)
    {   
        // Parte esquerda
        qtdVaz = (m - qtdCif) / 2;
        for (i = 0; i < qtdVaz; i++) 
        {
            printf("_");
        }

        //Meio
        for (i = 0; i < qtdCif; i++)
        {
            printf("$");
        }
        //Direita
        for (i = 0; i < qtdVaz; i++) 
        {
            printf("_");
        }

        printf("\n");

        qtdCif += 2; 
        if (qtdCif > m) break;

    }

    qtdCif -= 4;
    for (;;)
    {
        // Parte esquerda
        qtdVaz = (m - qtdCif) / 2;
        for (i = 0; i < qtdVaz; i++) 
        {
            printf("_");
        }

        //Meio
        for (i = 0; i < qtdCif; i++)
        {
            printf("$");
        }
        //Direita
        for (i = 0; i < qtdVaz; i++) 
        {
            printf("_");
        }

        printf("\n");

        qtdCif -= 2;
        if (qtdCif < 0) break;
    }

    return 0;
}