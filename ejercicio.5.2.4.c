//programa que calcule la suma de los primeros N numeros naturales-.
#include <stdio.h>

int main(){
    int N, i;
    int suma= 0;

    //valido que N sea un numero natural.
    do {
        printf("Ingrese la cantidad N de numeros naturales a sumar: ");
        scanf("%d", &N);
        while (getchar() != '\n');

        if (N <= 0){
            printf("Error- N debe ser un entero mayor a cero.\n");
        }
    }while(N <= 0);

    for (i= 1; i <= N; i++){
        suma+= i;
    }

    printf("\nLa suma de los primeros %d numeros naturales es: %d\n", N, suma);

    return 0;


}
