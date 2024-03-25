#include <stdio.h>

int main() {

  float t1 = 0, t2 = 0;
  char tipo1, tipo2;

  scanf("%f %c", &t1, &tipo1);

  if (tipo1 == 70 || tipo1 == 102) {
    t2 = (t1 - 32) / 1.8;
    tipo2 = 'C';
  } else if (tipo1 == 67 || tipo1 == 99) {
    t2 = (1.8 * t1) + 32;
    tipo2 = 'F';
  }

  printf("%.2f (%c)", t2, tipo2);

  return 0;
}
