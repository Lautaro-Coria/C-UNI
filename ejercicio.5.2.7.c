#include <stdio.h>

int main ()
{
    int i;
    int edad;
    float estatura;

    int sumaedades= 0;
    float sumaestaturas= 0;

    int cantmayores10= 0;
    int cantmenores140=0;

    for (i= 1; i<= 45; i++)
    {
        do
        {
            printf("Ingrese la edad del alumno:");
            scanf("%d", &edad);
            while (getchar() != '\n');

                if( edad <= 0)
                {
                    printf("ERROR- La edad no puede ser menor a cero.\n");
                }

        }while ( edad <= 0);
12

        do {
            printf("Ingrese la estatura:");
            scanf("%f", &estatura);
            while (getchar() != '\n');

            if (estatura <= 0){
                printf("ERROR-La estatura debe ser mayor a cero.\n");
            }

        }while (estatura <= 0);

        sumaedades += edad;
        sumaestaturas += estatura;

        if (edad > 10){
            cantmayores10 ++;
        }
        if (estatura < 1.40){
            cantmenores140++;
        }

    }
    float promedioedad= (float)sumaedades/45;
    float promedioestatura= sumaestaturas/45;
    float porcentajemenores140= (cantmenores140*100.0)/45;

    printf("Edad promedio del curso: %.2f años \n", promedioedad);
    printf("La estatura promedio del curso: %.2f\n", promedioestatura);
    printf("La cantidad de alumnos mayores a 10 anios: %.2f\n", porcentajemenores140);
    printf("Porcentaje alumnos que miden 1.40 cm: %.2f%%\n", porcentajemenores140);

    return 0;

}
