//programa que permita calcular y mostrar una cantidad de numeros primos a partir de 2.
#include <stdio.h>

int main(){
    int cantidad;
    int contadorPrimos = 0;
    int numero = 2;

    //valido la entrada de datos con do-while:
    do{
      printf("\nIngrese la cantidad de numeros primos a generar: \n");
      scanf("%d", &cantidad);
      while (getchar() != '\n');

      if (cantidad <= 0){
        printf("\nERROR:La cantidad debe ser entero mayor a cero.\n");
      }
    }while (cantidad <= 0);

    printf("\nLos primeros %d numeros primos son: \n", cantidad);

    //bucle pricipal para encontrar la cantidad solicitada de primos
    while (contadorPrimos < cantidad){
        int esPrimo= 1;
        int divisor= 2;

        while(divisor <= numero /2 && esPrimo ==1){
            if (numero % divisor == 0){
                esPrimo = 0;
            }
            divisor++;
        }
        //si mantuvo la bandera en 1, el numero es primo.
        if (esPrimo== 1){
            printf("%d", numero);
            contadorPrimos++;
        }
        numero++;

    }
    printf("\n");

    return 0;
}
