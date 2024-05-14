#include <stdio.h>

int area (int x1, int y1, int x2, int y2) 
{
    int b = 0;
    int h = 0;
    int a = 0;

    b = x2-x1;
    h = y2-y1;

    a = b*h;

    return a;
}

int area_total (int r1_x1, int r1_y1, int r1_x2, int r1_y2, int r2_x1, int r2_y1, int r2_x2, int r2_y2)
{
    int a1 = 0;
    int a2 = 0;
    int at = 0;

    a1 = area(r1_x1, r1_y1, r1_x2, r1_y2);
    a2 = area(r2_x1, r2_y1, r2_x2, r2_y2);

    at = a1+a2;
    return at;
}

int main () {

    int r1x1 = 0, r1y1 = 0, r1x2 = 0, r1y2= 0;
    int r2x1 = 0, r2y1 = 0, r2x2 = 0, r2y2= 0;
    int area = 0;

    scanf("%d %d %d %d", &r1x1, &r1y1, &r1x2, &r1y2);
    scanf("%d %d %d %d", &r2x1, &r2y1, &r2x2, &r2y2);

    area = area_total(r1x1, r1y1, r1x2, r1y2, r2x1, r2y1, r2x2, r2y2);
    printf("RESP:%d", area);

    return 0;
}