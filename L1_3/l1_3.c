#include <math.h>
#include <stdio.h>

int main() {

  float x1 = 0, x2 = 0, y1 = 0, y2 = 0, l1 = 0, l2 = 0, perimetro = 0;

  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

  l1 = x2 - x1;
  l2 = y2 - y1;

  perimetro = 2 * (l1 + l2);

  printf("%.2f", perimetro);

  return 0;
}
