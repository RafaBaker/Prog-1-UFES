#include <stdio.h>

int main() {

  float real = 0;

  scanf("%f", &real);

  int inteiro = real;

  float decimal = real - inteiro;

  printf("INTEIRO:%d,REAL:%.2f", inteiro, decimal);

  return 0;
}
