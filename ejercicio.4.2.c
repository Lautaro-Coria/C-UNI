#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Ingrese el primer numero:");
    scanf("%d",&n1);

    printf("Ingrese el segundo numero:");
    scanf("%d",&n2);

    printf("Ingrese el tercer numero:");
    scanf("%d",&n3);

    if (n1< n2 && n1<n3){
        printf("\nEl primer numero (%d) es menor que los otros dos(%d y %d)\n", n1, n2,n3);
    } else{
        printf("\nEl primer numero (%d) NO es menor que los otros dos.\n",n1);
    }
    return 0;

}

