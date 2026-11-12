#include <stdio.h>

#define auto_max 60

int main()
{

    float tiempo_auto;
    int num_auto, primer_lugar = 0, auto_peor_tiempo= 0, suma_tiempos= 0, cantidad_particpantes= 0;
    float tiempos[auto_max];
    float menor_tiempo = -1, peor_tiempo= -1;
    float promedio;


    for (int i= 0; i< auto_max; i++)
    {
        tiempos[i]= 0.0;
    }

    printf("Ingrese el numero del auto del 1 al 60 (Negativo para Finalizar): ");
    scanf("%d", &num_auto);

    while (num_auto >= 0)
    {

        if (num_auto >= 1 && num_auto <= auto_max)
        {
            do
            {
                printf("Ingrese el tiempo del auto (debe ser real mayor a cero): ");
                scanf("%f", &tiempo_auto);

                if (tiempo_auto <= 0)
                {
                    printf("ERROR-El tiempo no puede ser negativo. Intente nuevamente.\n");
                }

            }
            while(tiempo_auto <= 0);

            tiempos[num_auto -1]= tiempo_auto;

        }
        else
        {
            printf("ERROR. El numero del auto esta fuera de rango, debe estar entre 1 y 60.\n");
        }
        printf("Ingrese el numero del auto del 1 al 60 (Negativo para Finalizar): ");
        scanf("%d", &num_auto);
    }


    for (int i= 0; i < 60; i++)
    {
        if (tiempos[i]> 0.0)
        {
            suma_tiempos += tiempos[i];
            cantidad_particpantes++;


            if (menor_tiempo == -1 || tiempos[i] < menor_tiempo)
            {
                menor_tiempo= tiempos[i];
                primer_lugar = i + 1;
            }

            if (peor_tiempo== -1 || tiempos[i] > peor_tiempo)
            {
                peor_tiempo= tiempos[i];
                auto_peor_tiempo= i + 1;

            }
        }
    }

    if (cantidad_particpantes > 0)
    {

        printf("Primer lugar: Aunto N° %d con un tiempo de %.2f segundos.\n", primer_lugar, menor_tiempo);
        printf("Peor tiempo: Auto N° %d con un tiempo de %.2f segundos.\n",auto_peor_tiempo, peor_tiempo);


        float promedio = suma_tiempos/ cantidad_particpantes;
        int contador_superaron_promedio = 0;

        for (int i= 0; i < auto_max; i++)
        {
            if (tiempos[i] > 0.0 && tiempos[i]> promedio)
            {
                contador_superaron_promedio++;
            }
        }
        printf("Promedio de tiempo de clasificacion: %.2f segundos.\n", promedio);
        printf("Cantidad de autos que superaron el promedio: %d.\n", contador_superaron_promedio);

        printf("Numeros de autos que No participan: ");
        int no_participan_count= 0;

        for (int i= 0; i < auto_max; i++)
        {
            if(tiempos[i] == 0.0)
            {
                printf("%d", i+1);
                no_participan_count++;
            }
        }
        if (no_participan_count== 0)
        {
            printf("Ninguno (todos los autos participaron).");
        }
        printf("\n");

    }
    else
    {
        printf("No se registraron tiempos validos en la competencia.\n");
    }

    printf("\nCarga finalizada con exito.\n");

    return 0;
}
