#include <math.h>
#include <stdio.h>

int main() {

  int num = 0, ordem = 0, resto = 0;

  scanf("%d %d", &num, &ordem);

  if (ordem == 1) {
    resto = num % 2;
    (resto == 0) ? printf("PAR") : printf("IMPAR");
  } else if (ordem == 2) {
    resto = (num < 10) ? 0 : (num / 10) % 2;
    (resto == 0) ? printf("PAR") : printf("IMPAR");
  } else if (ordem == 3) {
    resto = (num < 100) ? 0 : (num / 100) % 2;
    (resto == 0) ? printf("PAR") : printf("IMPAR");
  }

  return 0;
}
