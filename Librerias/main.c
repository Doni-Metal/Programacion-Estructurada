#include <stdio.h>
#include <stdlib.h>

#include "operaciones.h"


int main()
{
    printf("Librerias \n\n");

    float firstVal = 10;
    float secondVal = 15;
    float result;
    int option;

    printf("Soy una calculadora \n");
    printf("Que operacion deseas realizar \n");
    printf("1. Suma \n");
    printf("2. Resta \n");
    printf("3. Multiplicacion \n");
    printf("4. Division \n");
    printf("Elige una opcion \n");
    scanf("%i", &option);

    switch(option)
    {
    case 1:
        result = addition(firstVal, secondVal);
        break;
    case 2:
        result = subtraction(firstVal, secondVal);
        break;
    case 3:
        result = multiplication(firstVal, secondVal);
        break;
    case 4:
        result = divition(firstVal, secondVal);
        break;
    }

    printf("Resultado: %f \n", result);

    return 0;
}
