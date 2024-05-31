#include <stdio.h>

#define MAIOR_PAL 500
#define MAIOR_TEX 500

int main ()
{
    char texto[MAIOR_TEX][MAIOR_PAL];
    // char str[MAIOR_PAL];
    int i=0;

    while(scanf("%[A-Za-z]", texto[i])==1)
    {
        i++;
        // printf("I: %d\n", i);
        if (i==MAIOR_TEX)
            break;
        scanf("%*[^A-Za-z]");  
    }
    // printf("I: %d\n", i);
    i= i-1;
    for (; i >= 0; i--)
    {
        // printf("I: %d\n", i);
        printf(" %s", texto[i]);
    }
    printf(" ");
    return 0;
}