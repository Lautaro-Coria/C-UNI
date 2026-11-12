#include <stdio.h>

int main(){
    float sueldobase, precio=0.0, total, horas;
    char categoria;

    printf("Ingrese el sueldo base del trabajador: ");
    scanf("%f", &sueldobase);

    printf("Ingresa las horas extras trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese la categoria del trabajador(A,B,C,D,E,F): ");
    scanf(" %c", &categoria);

    if (categoria== 'A' || categoria== 'a'){
        precio= 8000.0;
    }
    if (categoria== 'B' || categoria== 'b'){
        precio= 8800.0;
    }
    if (categoria== 'C' || categoria== 'c'){
        precio= 10000.0;
    }
    if (categoria== 'D' || categoria== 'd'){
        precio= 12000.0;
    }
    if (categoria== 'E' || categoria== 'e'){
        precio= 14000.0;
    }

    total= sueldobase + (horas*precio);

    printf("\n--------------Informacion del empleado----------------\n");
    printf("Debido a la categoria %c del empleado y las %.0f horas trabajadas\n", categoria, horas);
    printf("El pago por horas extras es: $%.2f\n", horas*precio);
    printf("Sueldo total: %.2f\n",total);


    return 0;
}
