#include <stdio.h>

char codifica(int cod, char c) {
    int valor = (int)c;
    valor += cod; 
    if (valor > 122) {
        while(1) {
            valor -= 26;
            if (valor <= 122) break;
        }
    }

    c = valor;

    return c;
}

char descodifica(int cod, char c) {
    int valor = (int)c;
    valor -= cod;
    if (valor < 97) {
        while (1) {
            valor += 26;
            if (valor >= 97) break;
        }
    }
    
    c = valor;
    return c;
}

int main () {

    int op = 0, cod = 0; 
    char c = '\0';
    
    scanf("%d %d %c", &op, &cod, &c);
    while (c != '.') {
        if (c >= 97 && c <= 122) {
            if (op == 1) {
                c = codifica(cod, c);
            } else if (op == 2){
                c = descodifica(cod, c);
            } else {
                printf("Operacao invalida");
                break;
            }
        }
        printf("%c", c);
        scanf("%c", &c);
    }
    printf(".");

    return 0;
}