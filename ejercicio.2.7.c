#include <stdio.h>
int main () {
    float precio, monto_descuento, monto_final;
    int codigo;

    //ingreso de datos:
    printf("Ingrese el precio del producto:");
    scanf("%f",&precio);

    printf("Ingrese el codigo (1 o 0 en caso de descuento): ");
    scanf("%d", &codigo);

    //operacion de calculo de descuento:
    monto_descuento= precio *0.20* codigo; //el descuento es del 20% por eso 0,20
    monto_final= precio - monto_descuento;

    //salida de datos:
    printf("\n-----RESULTADOS----\n");
    printf("El monto incial es: %.2f\n", precio);
    printf("El descuento en productos seleccionados: %.2f\n",monto_descuento);
    printf("El monto final de ambos productos: %.2f\n", monto_final);

    return 0;



}
