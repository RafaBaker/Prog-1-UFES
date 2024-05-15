#include <stdio.h>

int checaHomem(int p)
{
    if (p >= 1 && p <= 5) return 1;
    else return 0;
}

int checaMulher (int p)
{
    if (p >= 6 && p <= 10) return 1;
    else return 0;
}

void imprimeDados(int qtdH, int qtdM)
{
    if (qtdH == 1 && qtdM == 1) printf("Um casal");
    else if (qtdH == 1 && qtdM == 0) printf("Um homem");
    else if (qtdH == 0 && qtdM == 1) printf("Uma mulher");
    else if (qtdH == 2 && qtdM == 0) printf("Par de homens");
    else if (qtdH == 0 && qtdM == 2) printf("Par de mulheres");
}

int main ()
{
    int p1 = 0, p2 = 0;
    int qtdH = 0, qtdM = 0;

    scanf("%d %d", &p1, &p2);

    if (p1 < 1 || p1 > 10 || p2 < 1 ||p2 > 10)
    {
        printf("Invalido");
    }

    else 
    {
        if (p1 == p2)
        {
            if (checaHomem(p1)) qtdH++;
            else if (checaMulher(p1)) qtdM++;
        }
        else {
            if (checaHomem(p1)) qtdH++;
            else if (checaMulher(p1)) qtdM++;

            if (checaHomem(p2)) qtdH++;
            else if (checaMulher(p2)) qtdM++;
        }
        
        imprimeDados(qtdH, qtdM);
    }


    return 0;
}