#include <stdio.h>

int main(){
    float temp;
    int i;

    int rachaPos= 0;
    int rachaNeg= 0;

    int ternasPos= 0;
    int ternasNeg= 0;

    for (i=1; i<=18; i++){
        do{
            printf("Ingrese la temperatura %d de 18: \n", i);
            scanf("%f", &temp);

            if (temp == 0){
                printf("ERROR--La temperatura debe ser distinta de cero.\n");
            }
        }while (temp == 0);

        if (temp > 0){
            rachaPos++;
            rachaNeg= 0;

            if (rachaPos == 3){
                ternasPos++;
                rachaPos= 0;
            }
        } else {
            rachaNeg ++;
            rachaPos= 0;

            if (rachaNeg== 3){
                ternasNeg++;
                rachaNeg= 0;
            }
        }
    }


    printf("\ncantidad de ternas positivas: %d\ņ", ternasPos);
    printf("\ncantidad de ternas negaticas: %d\n", ternasNeg);

    return 0;

}
