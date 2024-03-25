#include <stdio.h>

int main() {

  int n1 = 0, n2 = 0;
  double media = 0;

  scanf("%d %d", &n1, &n2);

  media = ((double)n1 + (double)n2) / 2;

  if (media >= 7) {
    printf("%.1lf - Aprovado", media);
  } else if (media < 5) {
    printf("%.1lf - Reprovado", media);
  } else {
    printf("%.1lf - De Recuperacao", media);
  }

  return 0;
}
