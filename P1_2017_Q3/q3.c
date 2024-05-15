#include <stdio.h>

int ehNumero(char c) 
{
    if (c >= '0' && c <= '9') return 1;
    else return 0;
}

int ehLetra(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
    else return 0;
}

int ehMaiuscula(char c)
{
    if (c >= 'A' && c <= 'Z') return 1;
    else return 0;
}

char transformaMinuscula(char c)
{
    char result = '\0';

    result = c+32;
    return result;

}

int main ()
{
    char car1 = '\0', car2 = '\0', car3= '\0', car4 = '\0';

    scanf("%c%c", &car1, &car2);

    if ((ehLetra(car1) || ehNumero(car1)) && (ehLetra(car2) || ehNumero(car2)))
    {
        scanf("%*c");
        scanf("%c%c", &car3, &car4);
        if ((ehLetra(car3) || ehNumero(car3)) && (ehLetra(car4) || ehNumero(car4)))
        {

            
            if (ehMaiuscula(car1))
            {
                car1 = transformaMinuscula(car1);
            }
        


        
            if (ehMaiuscula(car2))
            {
                car2 = transformaMinuscula(car2);
            }
        


            if (ehMaiuscula(car3))
            {
                car3 = transformaMinuscula(car3);
            }
            


            if (ehMaiuscula(car4))
            {
                car4 = transformaMinuscula(car4);
            }
            

            if (car1 == car3 && car2 == car4) printf("IGUAIS");
            else printf("DIFERENTES");
        }
        else 
        {
            printf("Invalido");
        }
    }
    else 
    {
        printf("Invalido");
    }

    return 0;
}