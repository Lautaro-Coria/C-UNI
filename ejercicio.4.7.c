#include <stdio.h>

int main(){
    float valor, sueldo;
    int horas;

    printf("Ingrese el valor por hora del empleado: ");
    scanf("%f", &valor);

    printf("Ingrese las horas totales trabajadas: ");
    scanf("%d", &horas);

    //calculo del sueldo basico:
    sueldo= horas* valor;

    if (horas>50){
        sueldo = sueldo +(horas*valor*0,20);
    }
    if (horas>150){
        sueldo = sueldo +(horas*valor*1,00);
    }
    printf("El sueldo final por las horas trabajadas es de: %.2f\n", sueldo);

    return 0;

}
