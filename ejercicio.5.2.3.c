#include <stdio.h>

int main(){
    int i, numero;
    int sumapares= 0;
    int contpares= 0;
    float promedio;

    for (i = 1; i <= 50; i++){
        printf("\nIngrese el numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0){
            sumapares += numero;
            contpares++;
        }

    }
    if (contpares > 0){
        promedio = (float) sumapares/ contpares;
        printf("\nEl promedio de los numeros ingresados es: %.2f%%\n", promedio);
    }
    else{
        printf("\nNo se ingresaron numeros pares.\n");
    }

    return 0;
}



