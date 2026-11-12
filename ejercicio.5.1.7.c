#include <stdio.h>

int main()
{
    //variables para la venta actual:
    float importe, importeNeto, porcentajeDescuento, montoDescuento;
    //variables para los informes generales:
    float acumuladorImportes= 0.0;
    int contadorVentas = 0;
    float maxVentas= 0.0;
    int ventasMenores15k= 0.0;
    float promedioVentas= 0.0;

    printf("Ingrese el importe de la venta (0 o menor para finalizar): ");
    scanf("%f", &importe);
    while(getchar() != '\n');

    while (importe > 0){
        contadorVentas++;
        acumuladorImportes= acumuladorImportes+ importe;

        //determinamos el porcentaje de descuento:
        if (importe < 15000){
            porcentajeDescuento=  (importe*3.5)/100;
            ventasMenores15k++;
        }
        if (importe >= 15000 && importe <= 25000){
            porcentajeDescuento = (importe*10)/100;
        }
        if (importe >= 25001 && importe <= 35000){
            porcentajeDescuento = (importe*20)/100;
        }
        if (importe >= 35001){
            porcentajeDescuento = (importe*25)/100;
        }

        //calculos por venta
        montoDescuento = importe * porcentajeDescuento;
        importeNeto = importe - montoDescuento;

        //informamos el detalle de la compra realizada
        printf("Descuento aplicado (%.1f%%): $%.2f\n",porcentajeDescuento*100, montoDescuento);

    }


}
