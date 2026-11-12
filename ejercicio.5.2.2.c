#include <stdio.h>

int main(){
    int i;
    int suma = 0; //acumulador

    for (i = 100; i >= 50 ; i -= 5){
        suma += i;
    }

    printf("La suma total es : %d\n", suma);

    return 0;

}
