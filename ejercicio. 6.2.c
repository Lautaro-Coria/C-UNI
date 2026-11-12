#include <stdio.h>

//PROTOTIPO DE FUNCION
int IngrDatoValcf (int min, int max, int condFin);
int CalculaResto (int dividendo, int divisor);
int esPar(int numero);
int esPrimo(int numero);
int Promedio(int acumulador, int contador);

int main(){
    //INICIAMOS VARIABLES EN 0.
    int num;
    int cantTotal= 0;
    int cantPrimos= 0;
    int cantPares= 0;
    int sumaImpares= 0;
    int cantImpares= 0;

    //DEFINIS EL RANGO Y CON CUAL FINALIZAS. (EN ESTE CASO -10)
    num = IngrDatoValcf(1, 50, -10);

    while (num != -10){
        cantTotal ++;

        //LLAMADAS A CADA FUNCION
        if(esPrimo(num)){
            cantPrimos++;
        }
        //FUNCION
        if (esPar(num)){
            cantImpares++;
        }else{
            sumaImpares += num;
            cantImpares++;

        }

        num = IngrDatoValcf(1, 50, -10);

    }

    if (cantTotal > 0){
        float porcPrimos= Promedio(cantPrimos* 100, cantTotal);
        printf("Porcentaje de numeros primos: %.2f%%\n", porcPrimos);
    } else {
        printf("No se ingresaron numeros validos.\n");
    }

    printf("La cantidad de numeros pares: %d\n", cantPares);

    float promImpares= Promedio(sumaImpares, cantImpares);
    printf("El promedio de numeros impares es: %.2f\n", promImpares);

    return 0;


    }


    int IngrDatoValcf(int min, int max, int condfin){
        int dato;
        do{
            printf("Ingrese un numero entre %d y %d (%d para salir): ", min, max, condfin);
            scanf("%d", &dato);
            while (getchar()!= '\n');

            if ((dato >= min && dato <= max)|| dato == condfin){
                return dato;
            }else{
                printf("ERROR.Valor fuera de rango. Intente nuevamente.\n");
            }

            }while (1);
        }


    int CalculaResto(int dividendo, int divisor){
        return dividendo % divisor;
    }

    int esPar(int numero){
        if (CalculaResto(numero,2 ) == 0){
            return 1;

        }else{
            return 0;
        }

    }

    int esPrimo(int numero){
        if (numero <= 1){
            return 0;
        }


        for (int i= 2; i < numero; i++){
            if (CalculaResto(numero,i)== 0){
                return 0;
            }
        }

        return 1;
    }

    int Promedio (int acumulador, int contador){
        if (contador > 0){
            return(float)acumulador/ contador;
        }
        return 0.0;
}



