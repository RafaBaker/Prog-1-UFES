#include <stdio.h>

int main() {

  int n = 0, num = 0, maior = 0, menor = 99999, qtdpar = 0, qtdimpar = 0, total = 0, i = 0;
  float media = 0;

  scanf("%d", &n);

  for (i; i < n; i++) {
    scanf("%d", &num);
    menor = (num < menor) ? num : menor; 
    maior = (num > maior) ? num : maior;
    
    if (num % 2 == 0) {
        qtdpar += 1;
    } else {
        qtdimpar += 1;
    }

    total += num;
  }
  media = (float)total / n; 
  printf("%d ", maior);
  printf("%d ", menor);
  printf("%d ", qtdpar);
  printf("%d ", qtdimpar);
  printf("%f", media);

  return 0;
}
