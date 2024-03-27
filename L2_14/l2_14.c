#include <stdio.h>

int main () {

    char car;

    printf("RESP:");
    while (1) {
        scanf("%c", &car);
        if (car == '!' || car == '.' || car == '?') {
            printf("%c", car);
            break;
        } else {
            if (!(car == ' ')) {
                printf("%c", car);
            }
        }
    }
    return 0;
}