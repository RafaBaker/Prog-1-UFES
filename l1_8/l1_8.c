#include <stdio.h>

int main() {

  char letra;

  scanf("%c", &letra);

  if (letra < 91) {
    letra = letra + 32;
  }

  if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' ||
      letra == 'u') {
    printf("Vogal");
  } else {
    printf("Nao vogal");
  }

  return 0;
}
