//mostrar por pantalla los numeros pares comprendidos entre 100 y 500.

#include <stdio.h>

int main(){
    int i ;

    for(i= 100; i<= 500; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }

    }
    return 0;

}






