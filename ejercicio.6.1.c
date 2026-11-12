#include <stdio.h>

int EstaDentroDelRango(int num, int min, int max);
int LeerYValidar(int min, int max);

int main(){
    int num;
    int cant100_500 = 0;
    int cantPares500_1200= 0;
    int suma1200_2000= 0;
    int cant1200_2000= 0;

    num == LeerYValidar(100,2000);

    while(num != 99){

        if (EstaDentroDelRango(num, 100, 500)){
            cant100_500++;
        }


        if (EstaDentroDelRango(num, 500,1200) && num% 2 == 0){
            cantPares500_1200++;
        }

        if (EstaDentroDelRango(num, 1200, 2000)){
            suma1200_2000 += num;
            cant1200_2000++;

        }

        num= LeerYValidar(100, 2000);
    }

    printf("La cantidad de numeros entre 100 y 500: %d\n", cant100_500);
    printf("La cantidad de numeros pares entre 500 y 1200: %d\n", cantPares500_1200);

    if (cant1200_2000 > 0){
        float promedio = (float) suma1200_2000/ cant1200_2000;
        printf("La cantidad de numeros pares ingresados entre 1200 y 2000: %d\n", promedio);
    }else {
        printf("No se ingresaron numeros entre 1200 y 2000.\n");
    }
    return 0;

    }

    int EstaDentroDelRango(int num, int min, int max){
    if (num >= min && num <= max){
        return 1;
    }else {
        return 0;
    }

    }

    int LeerYValidar(int min, int max){
        int ingreso;
        int esvalido;

        do {
            printf("Ingrese un numero entre %d y %d (99 para finalizar): ", min, max);
            scanf("%d", &ingreso);
            while (getchar() != '\n');

            if (ingreso == 99){
                esvalido = 1;
            }else{
                esvalido= EstaDentroDelRango(ingreso, min, max);
            }

            if (!esvalido){
                printf("ERROR: Numero fuera de rango. Debe ser entre %d y %d (0 99).\n\n", min, max);

            }


        } while (!esvalido);

        return ingreso;


}






























