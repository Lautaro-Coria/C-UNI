#include <stdio.h>
//En C no existe un tipo de dato especial para fechas en esta etapa.
//usamos dd/mm/aa como son 6 digitos usamos esos numeros y separamos.
int main(){
    int dia,mes,anio,ddmmaa,aammdd;

    printf("Ingrese la fecha:");
    scanf("%d",&ddmmaa);

    dia= ddmmaa/10000; //divido por 10.000
    mes= (ddmmaa/100)%100; //dividir por 100 elimina el año,y restringo los digitos con%100.
    anio= ddmmaa%100; //te da los ultimos dos digitos.
    aammdd= (anio*10000)+ (mes*100)+ dia;

    printf("\n-----RESULTADOS------\n");
    printf("La fecha original era: %06d\n",ddmmaa);
    printf("Su conversion a formato aa/mm/dd es: %02d/%02d/%02d\n", anio, mes, dia);

    return  0;

}
