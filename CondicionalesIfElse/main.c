#include <stdio.h> //declaracion librerias
#include <stdlib.h>
#include <time.h>   // libreria necesaria pra la funcion srand

int main()
{
//    printf("Condicion if, else, else if \n\n");
//
//    float valA, valB,valC;
//    valA = 50;
//    valB = 100;
//    valC = 150;
//
//    printf("Condicion: \n");
//
//    if(valA == valB)
//    {
//        printf("No se va a cumplir esta condicion \n");
//    }
//    else if(valB == valC)
//    {
//        printf("Tampoco se va a cumplir esta \n");
//    }
//    else
//    {
//        printf("Ninguna condicion se cumplio \n");
//        printf("Despues de esta linea el programa va a terminar \n");
//    }

// Reto
    printf("Vamos a jugar, intenta adivinar el numero \n\n");

    int x,y;
    srand(time(NULL));

    printf("Introduce un numero entre el 1 y el 10: ");
    scanf("%i", &y);
    x = (rand() % 10) + 1;

    if(x == y)
        printf("\nMuy bien, Adivinaste!! \n");
    else
    {
        printf("\nPerdiste \n");
        printf("El numero era: %i \n", x);
    }

    return 0;
}
