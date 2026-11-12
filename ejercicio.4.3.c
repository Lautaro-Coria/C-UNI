#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Ingrese el primer numero:");
    scanf("%d",&n1);

    printf("Ingrese el segundo numero:");
    scanf("%d",&n2);

    printf("Ingrese el tercer numero:");
    scanf("%d",&n3);

    if (n1 == n2 + n3) {
        printf("\nEl numero %d es igual a la suma de los otros dos (%d + %d).\n", n1, n2, n3);
}   else if (n2 == n1 + n3) {
        printf("\nEl numero %d es igual a la suma de los otros dos (%d + %d).\n", n2, n1, n3);
}   else if (n3 == n1 + n2) {
        printf("\nEl numero %d es igual a la suma de los otros dos (%d + %d).\n", n3, n1, n2);
}   else {
        printf("\nNingun numero es igual a la suma de los otros dos.\n");
}
}
