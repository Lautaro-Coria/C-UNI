#include <stdio.h>

int main(){
    int n1, n2, n3, n4;
    int menor, orden;

    printf("Ingrese el primer numero:");
    scanf("%d",&n1);

    printf("Ingrese el segundo numero:");
    scanf("%d",&n2);

    printf("Ingrese el tercer numero:");
    scanf("%d",&n3);

    printf("Ingrese el cuarto numero:");
    scanf("%d",&n4);

    //determine el menor valor y su numero de orden.
    //asumimos primero que el menor es el primero y su oden tambiem.
    menor = n1;
    orden = 1;

    // sentencias if
    if (n2< menor){
        menor= n2;
        orden= 2;
    }
    if (n3 < menor){
        menor= n3;
        orden= 3;
    }
    if (n4 < menor){
        menor= n4;
        orden= 4;
    }

    printf("Valores ingresados: %d, %d, %d, %d\n", n1, n2, n3, n4);
    printf("El menor valor es %d y fue ingresado en el orden %d.\n", menor, orden);

    return 0;
}
