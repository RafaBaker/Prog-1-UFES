#include <math.h>
#include <stdio.h>

int main() {

  const float pi = 3.141592;
  float r1 = 0, a1 = 0, r2 = 0, a2 = 0;

  scanf("%f", &r1);

  a1 = pi * (r1 * r1);
  a2 = a1 / 2;
  r2 = sqrt(a2 / pi);

  printf("%.2f %.2f", a1, r2);

  return 0;
}
