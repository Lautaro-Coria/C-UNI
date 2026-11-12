#include <stdio.h>

int IngrDatoValCF(int min, int max, int condFin);
int CalculaResto(int dividendo, int divisor);
int esPar(int numero); //invoca a la funcion CalculaResto()
int esPrimo(int numero); //invoca a la funcion CalculaResto()
int Promedio(int acumulador, int contador);

int main(){
    int num;
    int cantTotal = 0;
    int cantPrimos= 0;
    int cantPares= 0;
    int sumaImpares= 0;
    int cantImpares= 0;


    num = IngrDatoValCF(1, 50, -10);

    while (num != -10){
        cantTotal++;

        if (esPrimo(num)){
            cantPrimos++;
        }
        if (esPar(num)){
            cantPares++;
        }else{
            sumaImpares+= num;
            cantImpares++;
        }

        num= IngrDatoValCF(1, 50, -10);

    }

    if (cantTotal > 0){
        float porcPrimos = Promedio(cantPrimos* 100, cantTotal);
        printf("Porcentaje de numeros primos: %.2f%%\n", porcPrimos);
    } else {
        printf("No se ingresaron numeros validos.\n");
    }


    printf("Cantidad de numeros pares: %d\n", cantPares);

    float promImpares = Promedio(sumaImpares, cantImpares);
    printf("Promedio de numeros impares: %.2f\n", promImpares);


    return 0;

}
    int IngrDatoValCF(int min, int max, int condFin){
        int dato;

        do{
            printf("Ingrese un numero entero entre %d y %d (%d para finalizar): ", min, max, condFin);
            scanf("%d", &dato);
            while (getchar() != '\n');

            if ((dato >= min && dato <= max) || dato == condFin){
                return dato;
            } else {
                printf("ERROR. Valor fuera de rango. intente nuevamente.\n");
            }

        } while (1);
    }

    int CalculaResto(int dividendo, int divisor){
        return dividendo% divisor;
    }

    int esPar(int numero){
        if (CalculaResto(numero, 2)== 0){
            return 1;
        } else {
            return 0;
        }
    }

    int esPrimo(int numero){
        if (numero <= 1){
            return 0;
        }

        for (int i= 2; i< numero; i++){
            if (CalculaResto(numero, 1)== 0){
                return 0;
            }
        }
        return 1;

    }

    int Promedio(int acumulador, int contador){
        if (contador > 0){
            return (float) acumulador/ contador;
        }
        return 0.0;

    }



























