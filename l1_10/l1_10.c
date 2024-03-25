#include <math.h>
#include <stdio.h>

int main() {

  int num;

  scanf("%d", &num);
  num = abs(num);

  if ((num % 2) == 0) {
    printf("Par");
  } else {
    printf("Impar");
  }

  return 0;
}
