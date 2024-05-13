#include <stdio.h>

float Soma(float num1, float num2) 
{
    float soma = 0.0;
    soma = num1 + num2;
    return soma;
}
float Subtracao(float num1, float num2) 
{
    float sub = 0.0;
    sub = num1-num2;
    return sub;
}
float Divisao(float num1, float num2)
{
    float div = 0.0;
    div = num1 / num2;
    return div;
}
float Multiplicacao(float num1, float num2)
{
    float mult = 0.0;
    mult = num1 * num2;
    return mult;
}
float fazOpera(float num1, float num2, char oper)
{
    float result = 0;
    switch (oper)
    {
        case '+':
            result = Soma(num1, num2);
            break;
        case '-':
            result = Subtracao(num1, num2);
            break;
        case '/':
            result = Divisao(num1, num2);
            break;
        case '*':
            result = Multiplicacao(num1, num2);
            break;
    }
    return result;
} 

int main()
{
    float num1 = 0.0, num2 = 0.0, result = 0.0;
    char oper = '\0';

    scanf("%f %f %c", &num1, &num2, &oper);
    result = fazOpera(num1, num2, oper);
    while (scanf("%f %c", &num1, &oper) == 2) 
    {
        result = fazOpera(result, num1, oper);
    }

    printf("%.2f", result);

    return 0;
}