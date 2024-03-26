#include <stdio.h>

int main() {
    int tipo = 0;
    double s = 0, num = 0, den = 1;
    
    scanf("%d", &tipo);
    switch (tipo) {
        case 1:
            num = 1, den = 1;
            for (den; den <= 50; den++) {
                s += num/den;

                num += 2;
            }
            break;
        case 2:
            num = 2;
            den = 50;
            for (den; den >= 1; den--) {
                s += num/den;

                num *= 2;
            }
            break;
        case 3:
            num = 1, den = 1;
            for (num; num <= 10; num++) {
                den = num*num;
                s += num/den;
            }
    }
    printf("%.6lf", s);
    
    return 0;
}
