#include <math.h>
#include <stdio.h>

int main() {

  int v1 = 0, v2 = 0;
  float soma = 0;

  scanf("%d %d", &v1, &v2);

  soma = sqrt(v1) + sqrt(v2);

  printf("%.2f", soma);

  return 0;
}
