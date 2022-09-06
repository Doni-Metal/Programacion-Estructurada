#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    printf("Entra a la funcion factorial, n vale: %i \n", n);

    if(n > 1)
    {
        printf("La funcion se llamara a si misma otra vex \n");
        return n * factorial(n - 1);
    }
    else
    {
        printf("n es igual a 1, termina la recursividad \n");
        return 1;
    }
}

int main()
{
    printf("Recursividad \n\n");

    int result = factorial(5);
    printf("\nEl resultado es: %i", result);

    return 0;
}
