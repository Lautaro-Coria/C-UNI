//estacion de servicio petromatanza
#include <stdio.h>

int main(){
    float cantidadlitros;
    float importe;
    float precioxlitro;
    float importemayor= 0.0;
    float totalcobrado = 0.0;
    int articulo = 1;
    int numcliente, numclientemayor;
    int cantidadtickes = 0;

    printf("===ESTACION DE SERVICIO PETROMATANZA===\n");
    while (articulo != 0){
        do {
            printf("Ingrese el numero del articulo (entre [40,90] o '0' para finalizar): ");
            scanf("%d", &articulo);
            while (getchar() != '\n');

            if   ((articulo < 40 || articulo > 90)&& articulo != 0) {
                printf("ERROR- El numero del articulo debe estar entre 40 y 90.\n");
            }
        } while   ((articulo < 40 || articulo > 90)&& articulo != 0) ;


        do {
            printf("Ingrese el numero del cliente (mayor a cero): ");
            scanf("%d", &numcliente);
            while (getchar() != '\n');

            if (numcliente <= 0){
                printf("ERROR-El numero del cliente debe ser mayor a cero.\n");
            }
        } while (numcliente <= 0);

        do {
            printf("Ingrese el precio por litro del combustible: ");
            scanf("%f", &precioxlitro);
            while (getchar() != '\n');

            if (precioxlitro <= 0){
                printf("ERROR- El precio del combustible no puede ser negativo.\n");
            }
        } while (precioxlitro <= 0);

        do {
            printf("Ingrese la cantidad de litros:");
            scanf("%f", &cantidadlitros);
            while(getchar() != '\n');

            if (cantidadlitros <= 0){
            printf("ERROR- La cantidad de litros debe ser mayor a cero.\n");
            }
        } while (cantidadlitros <= 0);

            importe = precioxlitro* cantidadlitros;
            totalcobrado= totalcobrado + importe;
            cantidadtickes++;

        if (cantidadtickes == 1 || importe > importemayor){
            importemayor= importe;
            numclientemayor= numcliente;
        }
            printf("\n==================TICKET===================\n");
            printf("DATOS DEL CLIENTE= \n");
            printf("numero de articulo: %d.\n", articulo);
            printf("numero de cliente: %d\n", numcliente);
            printf("cantidad de litros: %.2f.\n", cantidadlitros);
            printf("Importe a cobrar: %.2f\n", importe);
            printf("=============================================\n\n");

        }

        if (cantidadtickes > 0){
            printf("\n============RESUMEN DEL DIA============== \n");
            printf("Cantidad de tickets emitidos: %d\n", cantidadtickes);
            printf("Total cobrado en el dia: %.2f\n", totalcobrado);
            printf("Mayor venta realizada: %.2f\n", importemayor);
            printf("Numero del cliente de la mayor venta: %d\n", numclientemayor);
            printf("=============================================\n\n");
        }

    return 0;



}













