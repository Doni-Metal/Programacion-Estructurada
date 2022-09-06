#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // \n sirve para hacer salto de linea
    // %i, %f, %c nos sirven para idicar el tipo de valor
//    int integerA;
//    float floatA;
//    char letter;
//
//    printf("Ingresa el valor del entero A: ");
//    scanf("%i", &integerA);
//
//    printf("Ingresa el valor del float A: ");
//    scanf("%f", &floatA);
//
//    printf("Ingresa el caracter de letter: ");
//    scanf(" %c", &letter);
//
//    printf("El entero A es: %i\n", integerA);
//    printf("El flotante A es: %f\n", floatA);
//    printf("El caracter de letter es: %c", letter);

    int x, y, aux;

    printf("Ingresa el valor de x: ");
    scanf("%i", &x);

    printf("Ingresa el valor de y: ");
    scanf("%i", &y);

    aux = x;
    x = y;
    y = aux;

    printf("El valor de x es: %i\n", x);
    printf("El valor de y es: %i\n", y);

    return 0;
}
