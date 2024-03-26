#include <stdio.h>
#include <stdlib.h>

int main() {

  int n = 0, m = 0, i = 0;

  scanf("%d %d", &n, &m);

  printf("RESP:");
  for ( i=n+1; i<m; i++) {
    if (i % 2 == 0) {
        printf("%i ", i);
    }
  }

  return 0;
}
