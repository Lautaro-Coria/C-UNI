#include <stdio.h>

int main() {
    float kib, mib, gib, tib;

    //ingreso de datos:
    printf("Ingrese la cantidad de KiKibytes(KiB): ");
    scanf("%f",&kib);

    //Operacion de conversion de DATOS:
    mib= kib/ 1024.0f;
    gib= mib/ 1024.0f;
    tib= gib/ 1024.0f;

    //salida de datos luego de la conversion:
    printf("\n-----RESULTADOS-------\n");
    printf("Valor Ingresado: %.2f kiB\n", kib);
    printf("Equivale a: %.2f miB\n",mib);
    printf("Equivale a: %.2f giB\n",gib);
    printf("Equivale a: %.2f tiB\n",tib);

    return 0;








}
