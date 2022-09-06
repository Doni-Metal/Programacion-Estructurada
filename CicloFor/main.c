#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iteradores For\n\n");

//    int upperLim, bottomLim;
//
//    printf("Imprimir en orden descendiente \n\n");
//
//    printf("Ingresar limite superior \n");
//    scanf("%i", &upperLim);
//
//    printf("Ingresar limite inferior \n");
//    scanf("%i", &bottomLim);
//
//    for(int i = upperLim; i >= bottomLim; i--)
//    {
//        printf("Numero: %i\n", i);
//    }

// Reto
    int first = 0;
    int second = 1;
    int repeat;

    printf("Vamos a hacer la secuencia Fibonacci, cuantas veces quieres que se repita?\n");
    scanf("%i", &repeat);

    for(int i = 0; i <= repeat + 1; i++)
    {
        printf("%i\n", first);
        first += second;
        second = first - second;
    }

    return 0;
}
