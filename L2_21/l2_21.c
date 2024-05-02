#include <stdio.h>

int main () {

    int qtdconj = 0, i = 1, c = 0;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
    char texto = '\0';

    scanf("%d", &qtdconj);
    
    switch (qtdconj) {
        case 1:
            scanf("%d", &n1);
            break;
        case 2:
            scanf("%d", &n1);
            scanf("%d", &n2);
            break;
        case 3:
            scanf("%d", &n1);
            scanf("%d", &n2);
            scanf("%d", &n3);
            break;
        case 4:
            scanf("%d", &n1);
            scanf("%d", &n2);
            scanf("%d", &n3);
            scanf("%d", &n4);
            break;
        case 5:
            scanf("%d", &n1);
            scanf("%d", &n2);
            scanf("%d", &n3);
            scanf("%d", &n4);
            scanf("%d", &n5);
            break;
        case 6:
            scanf("%d", &n1);
            scanf("%d", &n2);
            scanf("%d", &n3);
            scanf("%d", &n4);
            scanf("%d", &n5);
            scanf("%d", &n6);
            break;
        case 7:
            scanf("%d", &n1);
            scanf("%d", &n2);
            scanf("%d", &n3);
            scanf("%d", &n4);
            scanf("%d", &n5);
            scanf("%d", &n6);
            scanf("%d", &n7);
            break;
        case 8:
            scanf("%d", &n1);
            scanf("%d", &n2);
            scanf("%d", &n3);
            scanf("%d", &n4);
            scanf("%d", &n5);
            scanf("%d", &n6);
            scanf("%d", &n7);
            scanf("%d", &n8);
            break;
        case 9:
            scanf("%d", &n1);
            scanf("%d", &n2);
            scanf("%d", &n3);
            scanf("%d", &n4);
            scanf("%d", &n5);
            scanf("%d", &n6);
            scanf("%d", &n7);
            scanf("%d", &n8);
            scanf("%d", &n9);
            break;
    }
    scanf("%*c");
    scanf("%*c");
    scanf("%c", &texto);
    while (texto != '"') {
        if (texto == '%') {
            scanf("%d", &i);
            if (i > qtdconj || i < 1) {
                printf("ERRO");
            } else {
                switch (i) {
                    case 1:
                        printf("%d", n1);
                        break;
                    case 2:
                        printf("%d", n2);
                        break;
                    case 3:
                        printf("%d", n3);
                        break;
                    case 4:
                        printf("%d", n4);
                        break;
                    case 5:
                        printf("%d", n5);
                        break;
                    case 6:
                        printf("%d", n6);
                        break;
                    case 7:
                        printf("%d", n7);
                        break;
                    case 8:
                        printf("%d", n8);
                        break;
                    case 9:
                        printf("%d", n9);
                        break;
                }
            }
        } else {
            printf("%c", texto);
        }
        scanf("%c", &texto);
    }

    return 0;
}