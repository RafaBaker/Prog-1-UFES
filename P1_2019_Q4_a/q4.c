#include <stdio.h>

int main () {

    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;
    int v1 = 0, v2 = 0;
    int rv1 = 0, rv2 = 0, soma = 0, resto = 0;
    // problema == 1: primeiro digito;
    // problema == 2: segundo digito;
    // problema == 3: ambos os digitos;
    int problema = 0;

    scanf("%d.%d.%d-%d", &d1, &d4, &d7, &v1);
    
    //pegando os dígitos separadamente
    d3 = d1 % 10;
    d1 = d1 / 10;
    d2 = d1 % 10;
    d1 = d1 / 10;

    d6 = d4 % 10;
    d4 = d4 / 10;
    d5 = d4 % 10;
    d4 = d4 / 10;

    d9 = d7 % 10;
    d7 = d7 / 10;
    d8 = d7 % 10;
    d7 = d7 / 10;

    v2 = v1 % 10;
    v1 = v1 / 10;


    if ((d1 == d2) && (d2 == d3) && (d3 == d4) && (d4 == d5) && (d5 == d6) && (d6 == d7) && (d7 == d8) && (d8 == d9) && (d9 == v1) && (v1 == v2))
    {
        printf("CPF invalido: digitos iguais!");
    }
    else 
    {
        soma = (d1*10) + (d2*9) + (d3*8) + (d4*7) + (d5*6) + (d6*5) + (d7*4) + (d8*3) + (d9*2);
        resto = soma % 11;
        if (resto < 2) rv1 = 0;
        else rv1 = 11-resto;

        if (!(rv1 == v1)) problema = 1;

        soma = 0;
        resto = 0;

        soma = (d1*11) + (d2*10) + (d3*9) + (d4*8) + (d5*7) + (d6*6) + (d7*5) + (d8*4) + (d9*3) + (rv1*2);
        resto = soma % 11;
        if (resto < 2) rv2 = 0;
        else rv2 = 11-resto;

        if (!(rv2 == v2)) problema += 2;

        switch (problema) 
        {
            case 0:
                printf("CPF valido!");
                break;
            case 1:
                printf("CPF invalido: primeiro digito!");
                break;
            case 2:
                printf("CPF invalido: segundo digito!");
                break;
            case 3:
                printf("CPF invalido: dois digitos!"); 
        }
    }

    return 0;
}