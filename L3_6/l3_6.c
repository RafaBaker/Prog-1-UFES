#include <stdio.h>
#include <math.h>

int EhPalindromo(int num)
{
    int a = 0, b = 0;
    int i = 0;
    int pot = 0;
    int qtdDig = 0;
    int flag = 1;
    

    qtdDig = log10(num)+1;
    for (; i < qtdDig; i++)
    {
        if (qtdDig == 1)
        {
            break;
        }

        pot = pow(10, qtdDig-1);
        a = num / pot;
        b = num % 10;

        if (!(a == b))
        {
            flag = 0;
            break;
        }
        else
        {
            num = num % pot;
            num = num / 10;
            qtdDig = log10(num)+1;
        }
    }

    return flag;
}

int main () {

    int num = 0;

    while (scanf("%d", &num)==1)
    {
        if (EhPalindromo(num)) printf("S\n");
        else printf("N\n");
    }


    return 0;
}