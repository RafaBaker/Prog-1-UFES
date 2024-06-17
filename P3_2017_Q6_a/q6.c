#include <stdio.h>

typedef struct 
{
    int x;
    int y;
}tPonto;


int main ()
{
    int l1, c1;
    int l2, c2;
    int i, j;
    
    scanf("%d %d", &l1, &c1);
    int placa1[l1][c1];
    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &placa1[i][j]);
        }
    }

    scanf("%d %d", &l2, &c2);
    int placa2[l2][c2];
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &placa2[i][j]);
        }
    }



    return 0;
}