#include <stdio.h>
#include <stdlib.h>

struct personalData
{
    char name[20];
    char lastName[20];
    int age;
};

int main()
{
    printf("Creacion y apertura de archivo \n\n");

    struct personalData person;

    FILE *archivo;
    archivo = fopen("DatosPersonales001.dat", "rb");

    if(archivo != NULL)
    {
//        fflush(stdin);
//
//        printf("Leer datos: \n");
//        printf("Ingresar el nombre: \n");
//        gets(person.name);
//        printf("Ingresar el apellido: \n");
//        gets(person.lastName);
//        printf("Ingresar la edad: \n");
//        scanf("%i", &person.age);
//
//        printf("Imprimir datos \n");
//        printf("%s \n", person.name);
//        printf("%s \n", person.lastName);
//        printf("%i \n", person.age);
//
//        fwrite(&person, sizeof(person), 1, archivo);
        fread(&person, sizeof(person), 1, archivo);

        printf("Imprimir los datos \n");
        printf("Nombre: %s \n", person.name);
        printf("Apellido: %s \n", person.lastName);
        printf("Edad: %i \n", person.age);

        fclose(archivo);
    }else
    {
        printf("No se pudo crear el archivo");
    }



    return 0;
}
