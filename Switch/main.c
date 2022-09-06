#include <stdio.h>
#include <stdlib.h>

int main()
{
//    printf("Switch \n\n");
//
//    int option;
//
//    scanf("%i", &option);
//
//    switch(option)
//    {
//    case 1:
//        printf("Elegiste el numero 1");
//        break;
//    case 2:
//        printf("Elegiste el numero 2");
//        break;
//    case 3:
//        printf("Elegiste el numero 3");
//        break;
//    default:
//        printf("Elegiste una opcion invalida");
//        break;
//    }

// Reto
    printf("Te encuentras en un suenio y tienes tres caminos \n\n");

    int option;

    printf("Escribe 1 si quieres ir por el camino de dulces \n");
    printf("Escribe 2 si quieres ir por el camino de madera \n");
    printf("Escribe 3 si quieres ver gatitos \n");
    scanf("%i", &option);

    switch(option)
    {
    case 1:
        printf("Te indigestas, te da diabetes y mueres \n");
        break;
    case 2:
        printf("Una parte del camino se rompe y caes a unos pinchos muriendo lenta y dolorosamente \n");
        break;
    case 3:
        printf("Te encanta ver gatitos y te quedas a vivir con ellos \n");
        break;
    default:
        printf("Te quedaste parado ahi como un idiota hasta que mueres de hambre \n");
        break;
    }

    return 0;
}
