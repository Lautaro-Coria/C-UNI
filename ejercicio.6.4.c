#include <stdio.h>

int MostrarMenu(int n1, int n2);
void pedirNumeros(int *n1, int *n2);

int main(){
    int num1, num2, opcion;

    pedirNumeros(&num1, &num2);


    do{
        opcion= MostrarMenu(num1, num2);

        switch (opcion){
            case 1: //sumar
                printf("Resultado de %d + %d = %d\n", num1, num2, num1 + num2);
                break;
        }
            case 2: //restar
                printf("Resultado de %d - %d= %d\n", num1, num2, num1 - num2);
                break;

            case 3: //multiplicar
                printf("Resultado de %d * %d= %d\n", num1, num2, num1*num2);
                break;

            case 4:
                if (num2 != 0){
                float resultado = (float)num1/ num2;
                printf("Resultado de %d / %d= %d\n", num1, num2, resultado);
            }else{
                printf("ERROR. No se puede dividir por cero.\n");
            }
            break ;

            case 5:
                printf("Cargar nuevos numero de trabajo:\n");
                pedirNumeros(&num1, &num2);
                printf("Numeros actualizados correctamente.\n");
                break;

            case 6:
            printf("Saliendo del programa...\n");
            break;


    //
    if (opcion >= 1 && opcion <= 4){
        printf("\nPresione ENTER para continuar.\n");
        getchar();
    }

    }while (opcion != 6);

    return 0;

}

int

























