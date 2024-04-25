#include <stdio.h>

int maiorValor (int a, int b, int c) {
    int maior = 0;

    if (a > maior) {
        maior = a;
    }
    
    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    return maior;
}

int menorValor(int a, int b, int c) {
    int menor = 11;

    if (a < menor) {
        menor = a;
    }
    
    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    return menor;
}

int valorMeio (int a, int b, int c) {
    int meio = 0, maior = 0, menor = 0;

    maior = maiorValor(a, b, c);
    menor = menorValor(a, b, c);

    if (!(a == menor || a == maior)) {
        meio = a;
    }

    if (!(b == menor || b == maior)) {
        meio = b;
    }

    if (!(c == menor || c == maior)) {
        meio = c;
    }

    return meio;
}

int main () {
    int qtd, id, maiorID = 0, maiorM = 0, maior2M = 0, maior3M = 0, maiorF = 0, maior2F = 0, maior3F = 0;
    int nota1, nota2, nota3;
    int maiornota1A, maiornota2A, maiornota3A;
    char sexo;
    int i = 0;

    scanf("%d", &qtd);
    for (;i < qtd; i++) {
        scanf("%d %c %d %d %d", &id, &sexo, &nota1, &nota2, &nota3);
        // Organizar as notas em ordem e armarzenar elas em maiornota1A, maiornota2A, maiornota3A
        maiornota1A = maiorValor(nota1, nota2, nota3);
        maiornota2A = menorValor(nota1, nota2, nota3);
        maiornota3A = valorMeio(nota1, nota2, nota3);

        if (sexo == 'M') {
            
        }
    }

    return 0;
}