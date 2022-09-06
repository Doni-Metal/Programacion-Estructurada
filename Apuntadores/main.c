#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Apuntadores \n\n");

    float val;

    float *apVal;

    apVal = &val;

    *apVal = 3.1416;

    printf("El valor de la variable val es: %f", val);

    return 0;
}
