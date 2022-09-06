#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Arreglos bidimensionales e iteradores \n\n");

//    int integerArray[4][5];
//
//    for(int i = 0; i < 4; i++)
//    {
//        for(int j = 0; j < 5; j++)
//        {
//            integerArray[i][j] = ((i + j) * 100 + j);
//            printf("(%i, %i): %i \n", i, j, integerArray[i][j]);
//        }
//    }

// Reto
    srand(time(NULL));

    int studentsScore[5][6];
    float sum = 0;
    float resultAvg;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(j == 5)
            {
                studentsScore[i][j] = sum / 5;
                sum += studentsScore[i][j];
                printf("(%i, %i): %i \n", i, j, studentsScore[i][j]);
            }
            else
            {
                studentsScore[i][j] = rand() % (10 - 6 +1) + 6;
                sum += studentsScore[i][j];
                printf("(%i, %i): %i \n", i, j, studentsScore[i][j]);
            }
            resultAvg = sum / 6;
        }
        printf("El promedio de la fila (%i) es: %f\n", i + 1, resultAvg);
        sum = 0;
    }


    return 0;
}
