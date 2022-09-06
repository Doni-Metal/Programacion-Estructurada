#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales\n\n");

//    int integerList[3];
//    integerList[0] = 4;
//    integerList[1] = 5;
//    integerList[2] = 6;
//
//    float floatList[] = {23.4, 33.5, 45.6, 21.8, 56.7};
//
//    char charList[4];
//    charList[0] = 'L';
//    charList[1] = 'u';
//    charList[2] = 'i';
//    charList[3] = 's';
//
//    printf("Primer entero: \t %i \n", integerList[0]);
//    printf("Ultimo flotante: \t %f \n", floatList[4]);
//    printf("Lista de caracteres: \t %c%c%c%c \n", charList[0], charList[1], charList[2], charList[3]);
// Reto
    printf("Multiplica todos los valores de un arreglo \n\nIngresa los valores del arreglo \n\n");

    int numList[5], result;

    result = 1;

    for(int i = 0; i < 5; i++)
    {
        printf("Valor[%i]: ", i);
        scanf("%i", &numList[i]);
        result *= numList[i];
    }


    printf("El resultado es: %i \n", result);


    return 0;
}
