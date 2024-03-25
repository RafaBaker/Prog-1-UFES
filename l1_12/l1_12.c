#include <stdio.h>

int main() {

  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a < b && b < c) {
    printf("N1 = %d, N2 = %d, N3 = %d", a, b, c);
  } else if (b < c && c < a) {
    printf("N2 = %d, N3 = %d, N1 = %d", b, c, a);
  } else if (a < c && c < b) {
    printf("N1 = %d, N3 = %d, N2 = %d", a, c, b);
  } else if (b < a && a < c) {
    printf("N2 = %d, N1 = %d, N3 = %d", b, a, c);
  } else if (c < a && a < b) {
    printf("N3 = %d, N1 = %d, N2 = %d", c, a, b);
  } else {
    printf("N3 = %d, N2 = %d, N1 = %d", c, b, a);
  }

  return 0;
}
