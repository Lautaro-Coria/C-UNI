#include <stdio.h>
int main(){
    char codigo;
    int historia;
    float importe= 0.0;

    printf("Ingrese la historia clinica del paciente:");
    scanf("%d", &historia);

    printf("Ingrese el codigo de la prestacion (A,D,F,M,T):");
    scanf(" %c", &codigo);

    if (codigo== 'A'|| codigo== 'a'){
        importe= 17000.0;
    }
    if (codigo== 'D'|| codigo== 'd'){
        importe= 24000.0;
    }
    if (codigo== 'F'|| codigo== 'f'){
        importe= 31000.0;
    }
    if (codigo== 'M'|| codigo== 'm'){
        importe= 45000.0;
    }
    if (codigo== 'T'|| codigo== 't'){
        importe= 55000.0;
    }

    printf("\n-------------TICKET------------------\n");
    printf("El numero de historia del paciente es: %d.\n", historia);
    printf("El codigo del paciente es %c y su importe a pagar: %.2f.\n", codigo, importe);

    return 0;


}
