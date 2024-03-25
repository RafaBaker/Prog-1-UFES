#include <stdio.h>

int main() {

  int qtd, nitens, div, resposta;

  scanf("%d %d", &qtd, &nitens);

  div = nitens % qtd;

  (div == 0) ? printf("RESP:%d", qtd) : printf("RESP:%d", div);

  return 0;
}
