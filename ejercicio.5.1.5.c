#include <stdio.h>

int main()
{
    int numero;
    int orden= 0;
    int positivos= 0;
    int menor, posMenor= 0;
    int pares= 0;
    int maxMultiplo7, posMaxmult7=0;
    float porcentajePares;

    printf("Ingrese un numero enter(0 para finalizar): ");
    scanf("%d",&numero);
    while (getchar() != '\n');

    while(numero != 0)
    {
        orden ++;

        if (orden > 0)
        {
            positivos++;
        }

        if (orden == 1)
        {
            menor= numero;
            posMenor= orden;

        }
        else
        {
            if (numero < menor)
            {
                menor= numero;
                posMenor= orden;
            }
        }

        if (numero%2 == 0)
        {
            pares++;
        }

        if (numero%7 == 0)
        {
            if (posMaxmult7== 0)
            {
                maxMultiplo7= numero;
                posMaxmult7= orden;
            }
            else
            {
                if (numero > maxMultiplo7)
                {
                    maxMultiplo7= numero;
                    posMaxmult7= orden;
                }
            }
        }
        printf("Ingrese otro numero entero (0 para finalizar): ");
        scanf("%d",&numero);
        while(getchar() != '\n');
    }

    if (orden > 0)
    {
        porcentajePares = ((float)pares / orden) * 100.0;

        printf("a) Cantidad de valores positivos: %d\n", positivos);
        printf("b) Menor valor ingresado: %d (Orden: %d)\n", menor, posMenor);
        printf("c) Porcentaje de numeros pares: %.2f%%\n", porcentajePares);

        if ( posMaxmult7 != 0)
        {
            printf("d) Maximo valor multiplo de 7: %d (Orden: %d)\n", maxMultiplo7,  posMaxmult7);
        }
        else
        {
            printf("d) No se ingresaron numeros multiplos de 7.\n");
        }
    }
    else
    {
        printf("\nNo se ingresaron valores para procesar.\n");
    }

    return 0;
}










