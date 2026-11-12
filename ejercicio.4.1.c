//Se ingresan tres números enteros distintos. Determinar e informar el mayor de los tres
//números.
#include <stdio.h>

int main(){
    int n1,n2,n3,mayor;

    printf("Ingrese el primer numero:");
    scanf("%d",&n1);

    printf("Ingrese el segundo numero:");
    scanf("%d",&n2);

    printf("Ingrese el tercer numero:");
    scanf("%d",&n3);

    //si el primero es mayor:
    mayor= n1;

    //si el segundo supera al primero actual:
    if (n2>mayor){
        mayor= n2;
    }
    //si el tercero supera al primero actual:
    if (n3>mayor){
        mayor= n3;
    }
    //salida:
    printf("\nEl mayor de los tres numeros es: %d\n", mayor);

    return 0;


}
