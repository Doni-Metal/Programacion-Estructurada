#include <stdio.h>
#include <stdlib.h>

int main()
{
//    printf("Operadores de Incremento y Decremento\n");
//
//    int value, res;
//
//    value = 25;
//    res = value++;
//    printf("Resultado: %i\n", res);
//    printf("Value: %i\n", value);
//
//    value = 25;
//    res = ++value;
//    printf("Resultado: %i\n", res);
//
//    value = 25;
//    res = value--;
//    printf("Resultado: %i\n", res);
//
//    value = 25;
//    res = --value;
//    printf("Resultado: %i\n", res);

// reto

    int x;

    printf("Ingresa un numero:");
    scanf("%i", &x);

    x %= 5;
    x++;
    printf("x: %i", x);



    return 0;
}
