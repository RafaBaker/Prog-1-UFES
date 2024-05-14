#include <stdio.h>

int EhDigito(char c)
{
    int result = 0;

    if (c >= '0' && c <= '9') result = 1;
    else result = 0;

    return result;
}

char LeProxChar(char terminador)
{
    char car;
    scanf("%c", &car);
    if (car == terminador) car = 0;

    return car;
}

void ImprimePorExtenso(char digito)
{
    switch (digito)
    {
        case '0':
            printf("zero");
            break;
        case '1':
            printf("um");
            break;
        case '2':
            printf("dois");
            break;
        case '3':
            printf("tres");
            break;
        case '4':
            printf("quatro");
            break;
        case '5':
            printf("cinco");
            break;
        case '6':
            printf("seis");
            break;
        case '7':
            printf("sete");
            break;
        case '8':
            printf("oito");
            break;
        case '9':
            printf("nove");
            break;
    }
}


int main () {

    char terminador = '\0';
    char car = '\0', bckp = '\0';
    int flag = 0, flag2 = 0;

    scanf("%c", &terminador);
    scanf("%*c");

    while (1)
    {
        car = LeProxChar(terminador);
        if (car)
        {
            flag = EhDigito(car);
            if (flag) 
            {
                bckp = LeProxChar(terminador);
                if (bckp == 0) 
                {   
                    ImprimePorExtenso(car);
                    break;
                }
                flag2 = EhDigito(bckp);
                if (flag2) 
                {
                    printf("%c%c", car, bckp);
                    while (1)
                    {
                        bckp = LeProxChar(terminador);
                        if (EhDigito(bckp)) printf("%c", bckp);
                        else 
                        {
                            if (bckp != 0) printf("%c", bckp);
                            break;
                        }
                    }
                } 
                else 
                {
                ImprimePorExtenso(car);
                if (bckp != 0) printf("%c", bckp);
                }
            }
            else if (car != 0) printf("%c", car);
        }
        else break;
    }


    return 0;
}