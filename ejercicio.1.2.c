#include <stdio.h>

int main()
{
    int num1, num2;
    int suma, producto, resto;
    float cociente;

    //ingreso de datos por parte del usuario:
    printf("Ingrese el primer numero entero:");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero entero:");
    scanf("%d",&num2);

    //operaciones:
    suma= num1 + num2;
    producto= num1 * num2;
    resto= num1 % num2;
    cociente= (float)num1 / num2;

    //mostrar resultados:
    printf("\n---Resultados---\n");
    printf("Suma: %d\n", suma);
    printf("Producto: %d\n", producto);
    printf("Resto: %d\n",resto);
    printf("Cociente: %.2f\n");

    return 0;
}
