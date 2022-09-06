#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int rSum;
//    float rRes;
//    float rDiv;
//    float rMult;
//    int rMod;
//
//    rSum = 7 + 3;
//    rRes = 7.1 - 3.1;
//    rDiv = 7.0 / 3.0;
//    rMult = 7 * 3;
//    rMod = 7 % 3;
//
//    printf("Resultado de la suma: %i \n", rSum);
//    printf("Resultado de la resta: %f \n", rRes);
//    printf("Resultado de la division: %f \n", rDiv);
//    printf("Resultado de la multiplicacion: %f \n", rMult);
//    printf("Resultado del modulo: %i \n", rMod);

// Calculadora area y volumen cilindro
    printf("Vamos a calcular el volumen y area de un cilindro\n\n");

    float r, h;
    float pi = 3.141592;

    printf("Introduce el radio del cilindro: ");
    scanf("%f", &r);
    printf("Introduce la altura del cilindro: ");
    scanf("%f", &h);

    float a = 2 * pi * r * (r + h);
    float b = (r * r) * pi;
    float v = pi * (r * r) * h;

    printf("\nEl area de la base es: %f\n", b);
    printf("El area total es: %f\n", a);
    printf("El volumen del cilindro es: %f\n", v);

// Conversor fahrenheit a celsius
    printf("\nAhora vamos a convertir de grados Fahrenheit a Celsius\n");

    float c, f;

    printf("\nIntroduce los grados Fahrenheit: ");
    scanf("%f", &f);

    c = ((f - 32) * 5) / 9;

    printf("En grados Celsius es: %f\n", c);

    return 0;
}
