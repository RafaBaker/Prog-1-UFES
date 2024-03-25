#include <stdio.h>

int main() {

  char letra;

  scanf("%c", &letra);

  if (letra <= 90 && letra >= 65) {
    printf("A letra deve ser minuscula!");
  } else if (letra >= 97 && letra <= 122) {
    letra = letra - 32;
    printf("%c(%d)", letra, letra);
  } else {
    printf("Nao e letra!");
  }

  return 0;
}
