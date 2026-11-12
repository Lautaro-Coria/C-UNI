#include <stdio.h>

int main(){
    int N;
    int i;
    int num;
    int suma = 0;
    int cantmultiplos3= 0;
    int cantmultipos5= 0;
    int sumordenpar= 0;

    do{
        printf("Ingrese un numero N entero positivo:");
        scanf("%d", &N);
        while (getchar() != '\n');

        if (N <= 0){
            printf("\nERROR-Debe ingresar un numero mayor a cero.\n");
        }
    } while (N <= 0);

    for(i = 1; i <= N; i++){
        do{
            printf("\nIngrese el numero natural: ");
            scanf("%d", &num);
            while (getchar() != '\n');

            if (num <= 0){
                printf("\nERROR-Debe ingresar un numero mayor a cero.\n");
            }
        }while (num <= 0);

        if (num % 3 == 0){
            cantmultiplos3++;
        }
        if (num % 5 == 0){
            cantmultipos5++;
        }

        if (i % 2 == 0){
            sumordenpar += num;
        }
    }

        printf("\n===========RESULTADO SUMA ===========\n");
        printf("\nLa sumatoria de los valores multiplos de 3 es: %d\n", cantmultiplos3);
        printf("\nLa cantidad de valores multiplos de 5 es: %d\n", cantmultipos5);
        printf("\nLa sumatoria de los valores que se ingresan en orden par es: %d\n", sumordenpar);
        printf("\n========================================\n");


        return 0;




}
