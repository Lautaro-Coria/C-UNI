//un programa que calcule e informe los valores de resultados menores a 6000 ?
#include <stdio.h>

int main(){
    int potencia= 1;

    printf("Potencias de 2 menores a 6000:\n");

    //el bucle se repite mientras que la potencias sea menor a 6000
    while (potencia<6000){
        printf("%d ", potencia);
        potencia = potencia *2;

    }
    printf("\n");

    return 0;


}
