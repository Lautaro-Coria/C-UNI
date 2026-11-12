#include <stdio.h>

int main(){
    float turista, primera_clase, venta_total;
    int venta_turista, venta_primera_clase;

    //ingreso de datos por parte del usuario:
    printf("Indique importe clase turista:");
    scanf("%f",&turista);

    printf("Boletos TOTALES VENDIDOS de clase turista: ");
    scanf("%d",&venta_turista);

    printf("Boletos TOTALES VENDIDOS de primera clase:");
    scanf("%d", &venta_primera_clase);

    //operacion de venta:
    primera_clase= turista * 1.30f; //es un 30% mas que la clase turista
    venta_total= (venta_turista * turista) + (venta_primera_clase* primera_clase);


    //salida de resultados:
    printf("\n------RESULTADOS-------\n");
    printf("El valor de la tarifa turista es:%.2f \n", turista);
    printf("El valor de la tarifa primera clase es: %.2f \n", primera_clase);
    printf("La VENTA TOTAL de boletos de ambas clases son: %f.2\n", venta_total);

    return 0;

}
