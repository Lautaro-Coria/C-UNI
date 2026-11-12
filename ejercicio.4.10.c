#include <stdio.h>

int main(){
    int codigocl, codigopb, aniopb, proyecciones;
    float importe, total;
    char formapago;
    int anioactual= 2026;

    printf("Ingrese el codigo de cliente: ");
    scanf("%d", &codigocl);

    printf("Ingrese el codigo de publicidad: ");
    scanf("%d", &codigopb);

    printf("Ingrese el anio de publicidad: ");
    scanf("%d", &aniopb);

    printf("Ingrese el importe de la publicidad por cada proyecccion: ");
    scanf("%f",&importe);

    printf("Ingrese 'e' si paga en efectivo o ingrese 'c' si paga con cheque a 60 dias:");
    scanf(" %c", &formapago);

    printf("Ingrese la cantidad de proyecciones al dia: ");
    scanf("%d", &proyecciones);

    //calculamos el costo base diarioo
    total = importe* proyecciones;

    //primera condicion
    if (aniopb== anioactual && (formapago == 'c' || formapago== 'C')){
        total = total + (total * 0.40);
    }
    //segunda condicion
    if (aniopb== (anioactual - 1) || aniopb== (anioactual -2)){
        total= total +(total * 0.20);
    }
    //tercera condicion:
    if ((anioactual- aniopb)> 3 && (formapago == 'E' || formapago == 'e')){
        total= total -(total* 0.10);
    }
    // promocion por cantidad de proyecciones:
    if (proyecciones>= 20){
        total = total -(total*0.15);
    }

    printf("\n----------------------RESULTADOS----------------------\n");
    printf("El codigo del cliente es: %d.\n",codigocl);
    printf("El codigo de publicidad es:%d.\n", codigopb);
    printf("El importe final a cobrar es: %.2f.\n", total);
    printf("Muchas gracias :)");

    return 0;

}
