#include <stdio.h>

int main() {

  int n1, n2;

  scanf("%d %d", &n1, &n2);

  if (n1 == n2) {
    printf("N1 = N2");
  } else if (n1 > n2) {
    printf("N1 = %d", n1);
  } else {
    printf("N2 = %d", n2);
  }

  return 0;
}
