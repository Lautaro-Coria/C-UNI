#include <stdio.h>

int main(){
    int parcial_1, parcial_2, suma_de_notas;
    float promedio;

    //ingreso de notas de los parciales:
    printf("Nota primer parcial: ");
    scanf("%d",&parcial_1);

    printf("Nota segundo parcial: ");
    scanf("%d",&parcial_2);

    //operacion aritmetica
    suma_de_notas = parcial_1 + parcial_2;
    promedio= suma_de_notas/2.0;

    //salida al usuario
    printf("\nEl promedio del alumno es: %.2f",promedio);

    return 0;


}
