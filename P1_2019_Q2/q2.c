#include <stdio.h>

int main () {
    
    int n1 = 0, n2 = 0, result = 0; 
    char car = '\0';

    scanf("%d %c %d", &n1, &car, &n2);

    if (car == '+') 
    {
        result = n1+n2;
        printf("SOMA:%d", result);
    }
    else if (car == '-')
    {
        result = n1-n2;
        printf("SUB:%d", result);
    }
    else if (car == '/')
    {
        result = n1/n2;
        int resto = n1 % n2;
        printf("DIV:%d", result);
        if (resto != 0) printf(", RESTO:%d", resto);
    }
    else if (car == '*')
    {
        result = n1*n2;
        printf("MULT:%d", result);
    }

    return 0;
}