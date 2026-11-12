#include <stdio.h>

int main(){
    char letra;

    printf("Ingrese un caracter:");
    //el espacio antes del % ignora saltos de linea o espacios previos en el buffer
    scanf(" %c", &letra);

    //evaluar si es vocal
    if (letra== 'a'|| letra == 'e' || letra== 'o'|| letra== 'u' || letra == 'i' ||letra == 'A' || letra== 'E' || letra == 'I'|| letra== 'O'|| letra =='U')
    {
        printf("\nVOCAL\n");
        printf("El valor numerico en ASCII de '%c' es: %d.\n", letra, letra);
}
}

