#include <stdio.h>

int main() {

  int n = 0, m = 0, i = 0;

  scanf("%d %d", &n, &m);

  for ( i=n+1; i<m; i++) {
    if (i % 3 == 0 || i % 4 == 0 || i % 7 == 0) {
        printf("%i ", i);
    }
  }

  return 0;
}
