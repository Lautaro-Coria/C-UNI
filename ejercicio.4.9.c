#include <stdio.h>

int main() {
    int cantidad;
    int paq30, paq10, unidad;
    float total;

    printf("Ingrese la cantidad de cuadernos a comprar:");
    scanf("%d", &cantidad);

    //descomposicion de paquetes:
    paq30= cantidad/30;
    paq10= (cantidad%30)/10;
    unidad= (cantidad%30)%10;

    //calculo de costos segun la lista
    total= (paq30* 250000.0)* (paq10*80000.0) + (unidad* 9000.0);

    if (cantidad > 50){
        total= total - (total*0.10);
    }

    //salida
    printf("paquetes de 30: %d\n", paq30);
    printf("paquetes de 10: %d\n", paq10);
    printf("Unidades sueltas: %d\n", unidad);
    printf("Importe total a pagar: %.2f\n", total);



    return 0;












}
