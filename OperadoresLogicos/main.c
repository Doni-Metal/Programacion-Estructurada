#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
//    printf("Operadores logicos \n\n");
//
//    float valA, valB, valC;
//    valA = 5;
//    valB = valC = 10;
//
//    if((valA < valB) && (valB == valC))
//        printf("Se cumplieron las dos condiciones \n");
//    else
//        printf("No se cumplieron las dos condiciones");
//
//    if((valA > valB) || (valA <= valC))
//        printf("Se cumplieron por lo menos una las dos condiciones \n");
//    else
//        printf("No se cumplieron las condiciones");

// Reto 1
//    int numA, numB;
//
//    printf("Ingresa un numero: ");
//    scanf("%int", &numA);
//    printf("Ingresa otro numero: ");
//    scanf("%int", &numB);
//
//    if(numA < numB)
//        printf("El numero menor es: %i \n\n", numA);
//    else
//        printf("El numero menor es: %i \n\n", numB);

// Reto 2
    srand(time(NULL));
    int cal = (rand() % 100) + 1;

    printf("Tu calificacion es: %i \n", cal);

    if(cal >= 90)
        printf("Excelente n.n \n");
    else if(cal > 70)
        printf("Aprobado \n");
    else if(cal > 60 && cal < 70)
        printf("Aprobado de panzaso \n");
    else
        printf("Estas reprobado \n");


    return 0;
}
