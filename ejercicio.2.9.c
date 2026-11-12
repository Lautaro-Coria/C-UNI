#include <stdio.h>

int main(){
    int numero,unidad, decena, centena;

    //ingreso de dato:
    printf("Ingrese un numero de tres cifras:");
    scanf("%d",&numero);

    //operaciones de unidades:
    centena= numero/100;
    decena= (numero/10)%10;
    unidad= numero%10;

    //salida de resultados:
    printf("\n-------RESULTADOS--------\n");
    printf("En centenas el numero es: %d\n", centena*100);
    printf("En decenas el numero es: %d\n", decena*10);
    printf("La unidad es: %d\n", unidad);

    return 0;







}
