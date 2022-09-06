#include <stdio.h>
#include <stdlib.h>

//char publicText[] = {"Texto en una variable global\n"};
//
//void check()
//{
//    printf("\nImprimir desde la funcion: check \n");
//
//    printf("Variable global: \n");
//    printf("%s", publicText);
//
//    printf("Variable local: \n");
//    printf("%s", privateText);
//}

char name[20];
float score;

float result()
{
    if(score > 7)
    {
        printf("El alumno %s aprobo n.n", name);
    }
    else
        printf("El alumno %s esta reprobado :( ", name);
}

int main()
{
    printf("Variables Globales \n\n");

//    char privateText[] = {"Texto en una variable local \n"};
//
//    printf("Variable global: \n");
//    printf("%s", publicText);
//
//    printf("Variable local: \n");
//    printf("%s", privateText);
//
//    check();

// Reto

    printf("Ingresa el nombre del alumno: ");
    scanf("%s", &name);

    printf("Ingresa la calificacion del estudiante: ");
    scanf("%f", &score);

    result();

    return 0;
}
