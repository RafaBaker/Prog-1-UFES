#include <stdio.h>

int main ()
{
    int n1 = 0, n2 = 0, result = 0;
    char car = '\0';

    scanf("%d %d %c", &n1, &n2, &car);

    switch (car)
    {
    case '+':
        result = n1 + n2;
        printf("RESP:%d", result);
        break;
    case '-':
        result = n1 - n2;
        printf("RESP:%d", result);
        break;
    case '/':
        result = n1 / n2;
        printf("RESP:%d", result);
        break;
    case '*':
        result = n1 * n2;
        printf("RESP:%d", result);
        break;
    default:
        printf("Invalido");
        break;
    }

    return 0;
}