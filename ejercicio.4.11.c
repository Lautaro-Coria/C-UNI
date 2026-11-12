#include <stdio.h>

int main(){
    int codigo, cantidad;
    float importe = 0; //por que es importe igual a cero ?

    //ingreso de datos, codigo y cantidades:
    printf("Ingrese el codigo del articulo: ");
    scanf("%d",&codigo);

    printf("Ingrese la cantidad a comprar:");
    scanf("%d",&cantidad);

    if (codigo ==1 || codigo == 10 || codigo == 100){
        importe= cantidad*1000.0;
    }

    if (codigo == 2 || codigo == 22 || codigo ||222){
        int cajas = cantidad/10;
        int sueltos= cantidad %10;
        importe= (cajas * 6500.0) +(sueltos * 700.0);
    }
    if (codigo == 3 || codigo == 33 || codigo == 333){
        importe= cantidad * 300.0;
        if (cantidad > 10){
            importe = importe-(importe * 0.10);
        }
    }

    if (codigo== 4 || codigo== 44){
        importe = cantidad * 100.0;
    }

    printf("\nARTICULO %d CANTIDAD %d IMPORTE A PAGAR %.2f.\n", codigo, cantidad,importe);

    return 0;


}
