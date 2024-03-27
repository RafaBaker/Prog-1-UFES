#include <stdio.h>

int main () {

    char car;
    
    while (1) {
        scanf("%c", &car);
        if (car == '!' || car == '.' || car == '?') {
            printf("%c", car);
            break;
        } else {
            if (97 <= car && car <= 122) {
                car -= 32;
            }
            printf("%c", car);
        }
    }
    return 0;
}