#include <stdio.h>

int main ()
{
    int legajo, i, nota;
    int cantidadcursados= 0;
    int cantidadaplazados= 0;
    int sumanotasfinal = 0;

    for (i = 1; i <= 20; i++)
    {

        do
        {
            printf("Ingrese el legajo del alumno: ");
            scanf("%d", &legajo);
            while(getchar() != '\n');

            if (legajo <= 0)
            {
                printf("ERROR-El numero de legajo debe ser mayor a cero.\n");
            }
        }
        while (legajo <= 0);

        do
        {
            printf("Ingrese la nota del alumno: \n");
            scanf("%d", &nota);
            while(getchar() != '\n');

            if (nota < 1 || nota > 10)
            {
                printf("ERROR-La nota debe estar entre 1 y 10.\n");
            }
        }
        while (nota < 1 || nota > 10);

        if (nota < 4)
        {
            cantidadaplazados++;
        }
        else if (nota >= 4 && nota < 7)
        {
            sumanotasfinal += nota;
            cantidadcursados++;
        }
        else
        {
            printf("El alumno con legajo %d ha promocionado\n", legajo);
        }
    }

    printf("\n==========RESULTADOS==========\n");
    printf("cantidad de alumnos aplazados: %d\n", cantidadaplazados);

    if (cantidadcursados > 0)
    {
        float promediofinal= (float)sumanotasfinal/cantidadcursados;
        printf("Promedio de notas de los alumnos que van a final: %.2f\n", promediofinal);
    }
    else
    {
        printf("No hubo alumnos enviados a final.\n");
    }
    printf("=================================\n");


    return 0;


}
