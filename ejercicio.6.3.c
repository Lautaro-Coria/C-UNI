#include <stdio.h>


int LeerYValidar(int posTerna);
int MayorMenor(int n1, int n2, int n3, char modo);

int main(){
    int v1,v2,v3;
    int cantTernas= 0;
    int sumaMayores= 0;
    int minimoGlobal= 0;

    v1= LeerYValidar(1);
    v2= LeerYValidar(2);
    v3= LeerYValidar(3);

    while(!(v1==96 && v2== 97 && v3 == 98)){
        cantTernas++;

        int mayorTerna= MayorMenor(v1, v2, v3, 'M');
        int menorTerna= MayorMenor(v1, v2, v3, 'm');


        printf("Terna %d Mayor: %d | Menor: %d\n", cantTernas, mayorTerna, menorTerna);

        sumaMayores += mayorTerna;

        if (cantTernas== 1 || menorTerna < minimoGlobal){
            minimoGlobal = menorTerna;
        }

        printf("\n------Ingrese la Terna %d------\n", cantTernas + 1);
        v1= LeerYValidar(1);
        v2= LeerYValidar(2);
        v3= LeerYValidar(3);

    }

    if (cantTernas > 0){
        float promedioMayores =  (float) sumaMayores/ cantTernas;
        printf("Promedio total de los valores mayores: %.2f\n", promedioMayores);
        printf("Valor minimo ingresado en todas las ternas: %d\n", minimoGlobal);
    }else{
        printf("No se ingresaron ternas validas para procesar.\n");
    }

    return 0;

}

int LeerYValidar(int posTerna){
    int num;
    do{
        printf("Ingrese el valor %d de la terna (1 a 98):", posTerna);
        scanf("%d", &num);
        while(getchar()!= '\n');

        if (num <= 0 || num >= 99){
            printf("ERROR. El numero debe ser mayor a 0 y menor a 99.\n");
        }

    }while (num <= 0 || num >= 99);

    return num;
}




int MayorMenor(int n1, int n2, int n3, char modo){
    if (modo == 'M'){
        int mayor = n1;
        if (n2 > mayor) mayor = n2;
        if (n3 > mayor) mayor = n3;
        return mayor;
    }else {
        int menor = n1;
        if (n2 > menor) menor = n2;
        if (n3 > menor) menor = n3;
        return menor;
    }
}
