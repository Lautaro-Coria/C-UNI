#include <stdio.h>

int main(){
    int numero,unidad_de_mil,centenas, decenas,unidad,suma_de_digitos;
    int primera_reduccion, segunda_reduccion;

    //pedimos el ingreso del numero:
    printf("Ingrese un numero de cuatro cifras:");
    scanf("%d",numero);

    //realizamos las operacion correspondientes:
    unidad_de_mil= numero/1000;
    centenas= (numero/100)%10;
    decenas= (numero/10)%10;
    unidad= numero%10;
    suma_de_digitos= unidad_de_mil+centenas+decenas+unidad;
    primera_reduccion= (suma_de_digitos/10)+(suma_de_digitos%10);
    segunda_reduccion= (primera_reduccion/10)+(primera_reduccion%10);

    //mostramos el resultado en pantalla:
    printf("\n------RESULTADO DE LA SUMA DE DIGITOS---------\n");
    printf("El numero ingresado es: %d\n", numero);
    printf("En centenas es:%d\n",centenas);
    printf("En decenas es:%d\n",decenas);
    printf("En unidad es:%d\n",unidad);
    printf("La suma de sus digitos es: %d\n", segunda_reduccion);

    return 0;
























}
