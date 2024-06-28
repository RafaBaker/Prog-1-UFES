#include <stdio.h>

typedef struct 
{
    int x;
    int y;
}tPonto;


int main ()
{
    int l1 = 0, c1 = 0;
    int l2 = 0, c2 = 0;
    int i, j;
    int i2, j2;
    
    scanf("%d %d", &l1, &c1);
    int placa1[l1][c1];
    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%1d", &placa1[i][j]);
        }
    }

    scanf("%d %d", &l2, &c2);
    int placa2[l2][c2];
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%1d", &placa2[i][j]);
        }
    }

    int flag = 1;
    for (i = 0; i <= l1-l2; i++)
    {
        for (j = 0; j <= c1-c2; j++)
        {
            flag = 1;
            //loop pra placa 2
            for (i2 = 0; i2 < l2 && flag; i2++)
            {
                for (j2 = 0; j2 < c2 && flag; j2++)
                {   
                    if (placa2[i2][j2] != placa1[i+i2][j+j2])
                    {
                        flag = 0;
                    }
                }
            }

            if (flag)
                printf("%d,%d\n", j, i);
        }
    }



    return 0;
}