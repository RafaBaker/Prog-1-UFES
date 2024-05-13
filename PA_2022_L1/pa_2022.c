#include <stdio.h>

int main () {

    char c1 = '\0';
    int n1 = 0, n2 = 0;
    int digito = 0;
    int novo = 0;
    int i = 10, m = 1;

    scanf("(%c,%d,%d)", &c1, &n1, &n2);

    if ((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z')) 
    {
        for (;;)
        {
            digito = n1 % 10;
            n1 /= 10;
            novo += digito*m;

            digito = 0;
            m*=10;

            digito = n2 % 10;
            n2 /= 10;
            novo += digito*m;

            i*=10;
            m*=10;

            if (n1 == 0 && n2 == 0) break;
            digito = 0;
        }
    } 
    else 
    {
        for (;;)
        {
            digito = n2 % 10;
            n2 /= 10;
            novo += digito*m;

            digito = 0;
            m*=10;

            digito = n1 % 10;
            n1 /= 10;
            novo += digito*m;

            i*=10;
            m*=10;

            if (n1 == 0 && n2 == 0) break;
            digito = 0;
        }
    }
    printf("(%d)\n", novo);

    return 0;
}