#include <stdio.h>

int main () {

    char car = '\0';
    //problema == 1: letras
    // problema == 2: numeros
    // problema == 3: letras e numeros;
    int problema = 0;

    //Primeira parte da placa
    while (1)
    {
        scanf("%c", &car);
        if (car == '-') break;
        else if (!((car >= 'A' && car <= 'Z') || (car >='a' && car <= 'z')))
        {
            problema = 1;
        }
    }

    while (scanf("%c", &car) == 1) 
    {
        if (!(car >= '0' && car <= '9')) 
        {
            problema += 2;
        }
    }

    switch (problema)
    {
        case 0:
            printf("Codigo valido!");
            break;
        case 1:
            printf("Codigo invalido!Problema nas letras!");
            break;
        case 2:
            printf("Codigo invalido!Problema nos numeros!");
            break;
        case 3:
            printf("Codigo invalido!Problema nas letras e nos numeros!");
            break;
    }

    return 0;
}