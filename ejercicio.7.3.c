//un programa que determina el el empleado o empleados con sueldo maximo, con un legajo igual a cero termina.

#include <stdio.h>
#define max_empleados 50

int main(){
    int legajos[max_empleados];
    float sueldos[max_empleados];
    int legajo, cantidad= 0;
    float sueldo;


    printf("Ingrese el legajo del empleado (0 para finalizar): ")
    scanf("%d", &legajo);

    while (legajo != 0 cantidad < max_empleados){

        printf("Ingrese el sueldo del empledo con legajo %d: ", legajo);
        scanf("%f", &sueldo);

        legajos[cantidad]= legajo;
        sueldos[cantidad]= sueldo;

        cantidad++;

        printf("Ingrese el legajo del siguiente empleado: ");
        scanf("%d", &legajo);


    }

    return 0;
}


