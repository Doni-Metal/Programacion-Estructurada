#include <stdio.h>
#include <stdlib.h>

//int Adittion(int a, int b)
//{
//    return a + b;
//}

int Exponent(int a, int b)
{
    int result = 1;

    for(int i = 0; i < b; i++)
        if(b == 0)
            result = 1;
        else if(b == 1)
            result = a;
        else
            result *= a;

    return result;
}


float Conversor(float value, int option)
{
    float dollarValue = 20.51;

    if(option == 1)
        return value / dollarValue;
    else
        return value * dollarValue;
}

int main()
{
    printf("Funciones \n\n");
//
//    int adittionRes = Adittion(3,4);
//
//    printf("Resultado: %i \n", adittionRes);

// Reto 1

    printf("Reto 1: Calcular la potencia de un numero \n\n");

    int baseVal, expVal;

    printf("Ingresa el valor Base: ");
    scanf("%i", &baseVal);

    printf("Ingresa el valor de exponente: ");
    scanf("%i", &expVal);

    int exponentRes = Exponent(baseVal, expVal);

    printf("El resultado es: %i \n\n", exponentRes);

// Reto 2

    printf("Reto 2: Convertir tu moneda a dolares y viceversa \n\n");

    int option;
    float cant, res;

    printf("Si quieres convertir de Pesos a Dolares presiona 1\n");
    printf("Si quieres convertir de Dolares a Pesos presiona 2 \n");
    scanf("%i", &option);



    if(option == 1 || option == 2)
    {
        printf("\nCuanto quieres cambiar: $");
        scanf("%f", &cant);
        res = Conversor(cant, option);
        printf("El resultado es: $%f \n", res);
    }
    else
        printf("\nOpcion incorrecta");

    return 0;
}
