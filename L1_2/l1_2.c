#include <math.h>
#include <stdio.h>

int main() {

  float comp = 0, largura = 0, perimetro = 0;

  scanf("%f %f", &comp, &largura);

  perimetro = 2 * (comp + largura);

  printf("%.2f", perimetro);

  return 0;
}
