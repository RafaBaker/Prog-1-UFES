#include <stdio.h>

int Propriedade(int num)
{
    int a = 0;
    int b = 0;
    int soma = 0;
    int result = 0;

    a = num / 100;
    b = num % 100;
    soma = a + b;
    if ((soma*soma) == num) result = 1;
    
    return result;
}

int main () {
    int n = 0, m = 0, i = 0;

    scanf("%d %d", &n, &m);

    for (i=n+1; i < m; i++) 
    {
        if (Propriedade(i)) printf("%d\n", i);
    }

    return 0;
}