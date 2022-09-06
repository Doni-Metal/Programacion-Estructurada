#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores relacionales \n");

    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA < valB)
        printf("Pregunta 1: Cierto \n");
    else
        printf("Pregunta 1: Falso \n");

    if(valA <= valB)
        printf("Pregunta 2: Cierto \n");
    else
        printf("Pregunta 2: Falso \n");

    if(valA > valB)
        printf("Pregunta 3: Cierto \n");
    else
        printf("Pregunta 3: Falso \n");

    if(valA >= valB)
        printf("Pregunta 4: Cierto \n");
    else
        printf("Pregunta 4: Falso \n");

    if(valA == valB)
        printf("Pregunta 5: Cierto \n");
    else
        printf("Pregunta 5: Falso \n");

    if(valA != valB)
        printf("Pregunta 6: Cierto \n");
    else
        printf("Pregunta 6: Falso \n");

    return 0;
}
