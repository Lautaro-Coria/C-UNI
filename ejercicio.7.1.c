#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

int main()
{

    int vecA[tam], suma= 0;
    int vecB[tam];
    int vecC[tam];
    int vecD[tam];
    float promedio;
    int n, contador= 0;


    srand(time(NULL));

    for (int i= 0; i < tam; i++)
    {
        vecA[i]= rand() % 100; //numeros aleatorios entre 0 y 99.
        vecB[i]= vecA[i];
        vecC[i]= vecA[i] + vecB[i];
        vecD[i]= vecA[tam- 1- i]; //invierte el vecA, osea lo da vuelta.
        suma += vecA[i];
    }

    printf("\n==================================================\n");
    printf(" Orden |\tVecA\t|\tVecB\t|\tVecC\t|\tVecD\n");
    printf("\n==================================================\n");

    for (int i= 0; i< tam; i++)
    {
        //mostramos i+1 como el numero de orden del 1 al 10.
        printf(" %2d |\t%2d\t|\t%2d\t|\t%2d\t|\t%2d\n", i+1, vecA[i], vecB[i], vecC[i], vecD[i]);
    }
    printf("\n==================================================\n");


    printf("posiciones donde hay elementos pares en VecA: \n");
    for (int i= 0; i<tam; i++)
    {
        if (vecA[i] % 2 == 0)
        {
            printf("-Posicion %d(el valor es %d)\n", i+1, vecA[i]);
        }
    }

    printf("elementos ubicados en posiciones impares en VecA: \n");
    for (int i = 0; i<tam; i++)
    {
        if (i % 2 != 0)
        {
            printf("-En la posicion %d el valor es: %d\n", i+1, vecA[i]);
        }
    }


    promedio= (float)suma / tam;
    printf("La suma de los elementos del vecA es %2d \n", suma);
    printf("El promedio de los elementos del vectA es %.2f \n",promedio);

    printf("\nj)ingrese un valor entero N para buscar en VecA: ");
    scanf ("%d", &n);

    for (int i = 0; i< tam; i++)
    {
        if (vecA[i] == n)
        {
            contador++;
        }
    }
    printf("El valor %d se repite %d en el vectorA.\n", n, contador);


    return 0;

}
