#include <math.h>
#include <stdio.h>

int main(void) {
  float a = 0, b = 0, soma = 0, produto = 0, potencia = 0, quadrado = 0;

  scanf("%f", &a);
  scanf("%f", &b);

  soma = a + b;
  potencia = pow(a, b);
  quadrado = pow(a, 2);
  produto = a * b;

  printf("%.2f\n", soma);
  printf("%.2f\n", potencia);
  printf("%.2f\n", quadrado);
  printf("%.2f\n", produto);

  return 0;
}