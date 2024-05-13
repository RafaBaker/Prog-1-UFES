#include <stdio.h>

int main () {

    char c1 = '\0';
    int n1 = 0, n2 = 0;
    int p1 = 0, s1 = 0, t1 = 0, q1 = 0;
    int p2 = 0, s2 = 0, t2 = 0, q2 = 0;
    int digito = 0;
    int novo = 0;
    int i = 10, c = 10;

    scanf("(%c,%d,%d)", &c1, &n1, &n2);

    p1 = n1 % 10;
    s1 = (n1 / 10) % 10;
    t1 = (n1 / 100) % 10;
    q1 = n1 / 1000; 

    p2 = n2 % 10;
    s2 = (n2 / 10) % 10;
    t2 = (n2 / 100) % 10;
    q2 = n2 / 1000; 

    if ((c1 >= 'a' && c1 <= 'z') || (c1 >= 'A' && c1 <= 'Z')) 
    {
        for (;;)
        {
            digito = n1;
        }
         
    }


    return 0;
}