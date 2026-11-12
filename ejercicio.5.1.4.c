#include <stdio.h>

int main(){
    float temperatura;
    float maxtemp, mintemp;
    int posMax= 0, posMin= 0;
    int orden= 0;

    printf("Ingrese el valor de la temperatura(-50 para finalizar):");
    scanf("%f", &temperatura);
    while (getchar() != '\n');

    while (temperatura != -50){
        orden++;

        //El primer valor ingresado inicializa los maximos y minimos.
        if (orden== 1){
            maxtemp= temperatura;
            mintemp= temperatura;
            posMax= orden;
            posMin= orden;

        } else {
            if (temperatura > maxtemp){
                maxtemp= temperatura;
                posMax= orden;
            }
            if (temperatura< mintemp){
                maxtemp= temperatura;
                posMax= orden;
            }

        }
        printf("Ingrese el valor de la temperatura (-50 para finalizar):");
        scanf("%f", &temperatura);
        while (getchar() != '\n');
    }

    if (orden > 0){
        printf("temperatura maxima: %.2f(posicion: %d)\n", maxtemp, posMax);
        printf("temperatura minima: %.2f(posicion: %d)\ņ", mintemp, posMin);
    } else {
        printf("\nNo se ingresaron temperaturas.\n");
    }

    return 0;



}
