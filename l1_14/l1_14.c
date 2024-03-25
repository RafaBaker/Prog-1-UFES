#include <math.h>
#include <stdio.h>

int main() {

  float x1 = 0, x2 = 0, y1 = 0, y2 = 0, px = 0, py = 0;

  scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &px, &py);

  if (x2 > x1) {
    if (y2 > y1) {
      if (x1 <= px && px <= x2 && y1 <= py && py <= y2) {
        printf("Dentro");
      } else {
        printf("Fora");
      }
    } else if (y1 > y2) {
      if (x1 <= px && px <= x2 && y1 >= py && py >= y2) {
        printf("Dentro");
      } else {
        printf("Fora");
      }
    }
  } else if (x1 > x2) {
    if (y2 > y1) {
      if (x1 >= px && px >= x2 && y1 <= py && py <= y2) {
        printf("Dentro");
      } else {
        printf("Fora");
      }
    } else if (y1 > y2) {
      if (x1 >= px && px >= x2 && y1 >= py && py >= y2) {
        printf("Dentro");
      } else {
        printf("Fora");
      }
    }
  }

  return 0;
}
