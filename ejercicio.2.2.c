#include <stdio.h>

int main() {
    float horas_trabajadas, valor_por_hora, sueldo_total;

    //ingreso de datos por teclado
    printf("ingrese la cantidad de horas trabajadas:");
    scanf("%f",&horas_trabajadas);

    printf("ingrese el valor por hora del empleado:");
    scanf("%f",&valor_por_hora);

    //operacion matematica
    sueldo_total= horas_trabajadas * valor_por_hora;

    //salida al usuario
    printf("\n----Liquidacion de sueldo-----\n");
    printf("El sueldo total por las horas trabajadas es: $%.2f\n",sueldo_total);

    return 0 ;
}

