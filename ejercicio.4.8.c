#include <stdio.h>

int main(){
    float importe , descuento, neto;

    printf("Ingrese el importe del producto: ");
    scanf("%f", &importe);

    if  (importe < 29550){
        descuento= importe* 0.045;
    }
    if (importe >= 29550 && importe <= 45000){
        descuento= importe* 0.08;
    }
    if (importe > 45000){
        descuento= importe * 0.105;
    }

    //CALCULO DEL PRECIO A COBRAR
    neto= importe - descuento;

    printf("Importe inicial: %.2f\n",importe);
    printf("Descuento aplicado: %.2f\n", descuento);
    printf("Precio neto a cobrar: %.2f\n", neto);

    return 0;

}
