#include <stdio.h>
#include <string.h>

int main()
{
    printf("Cadena de Caracteres \n\n");

//    char nameC [50];
//
//    int size;
//
//    printf("Ingresar el nombre con gets: \n");
//
//    gets(nameC);
//
//    printf("El nombre es: \n");
//    puts(nameC);
//
//    size = strlen(nameC);
//    printf("El tamaño de la cadena es: %i \n", size);

// Reto

    char nameC [50];
    int size;

    printf("Ingresar el nombre: \n");
    gets(nameC);
    size = strlen(nameC);

    printf("El nombre es: \n");
    puts(nameC);

    printf("E invertido es: ");

    for(int i = size - 1; i >= 0; i--)
    {
        printf("%c", nameC[i]);
    }

    return 0;
}
