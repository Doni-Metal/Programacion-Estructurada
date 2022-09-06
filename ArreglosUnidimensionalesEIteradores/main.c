#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales e iteradores \n\n");

//    int integerArray[11];
//
//    for(int i = 0; i < 11; i++)
//    {
//        integerArray[i] = i * i;
//        printf("Valor (%i): %i \n", i, integerArray[i]);
//    }

// Reto
    printf("Encontrar el numero mas grande del arreglo\n\n");

    int size;
    int major = 0;

    printf("Introduce el tamanio del arreglo: ");
    scanf("%i", &size);

    int nums[size];

    printf("Ingresa los valores: \n");

    for(int i = 0; i < size; i++)
    {
        printf("Valor[%i]: ", i);
        scanf("%i", &nums[i]);
        if(nums[i] > major)
            major = nums[i];
    }
     printf("\nEl numero mayor es: %i", major);



    return 0;
}
