//programa que ingresando caracteres. que diga cuales son caracteres y cuales son numericos.
//deben estar separados por mayusculas y minusculas.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char caracter;
    int digitos= 0;
    int mayusculas = 0;
    int minusculas= 0;
    int otros= 0;

    printf("Ingrese un caracter ('*' para finalizar):");
    scanf("%c", &caracter);

    while (getchar() != '\n');//limpieza estructurada del buffer en linux

    while (caracter != '*')
    {
        if (isdigit(caracter))
        {
            digitos ++;
        }
        if (isupper(caracter))
        {
            mayusculas ++;
        }
        if (islower(caracter))
        {
            minusculas ++;
        }
        if (!isalnum(caracter))
        {
            otros ++;
        }

        printf("Ingrese otro caracter ('*' para finalizar): ");
        scanf("%c", &caracter);
        while(getchar() != '\n');

    }

    printf("Caracteres numericos: %d\n", digitos);
    printf("Letras Mayusuclas: %d\n", mayusculas);
    printf("Letras minusculas: %d\n", minusculas);
    printf("Otros simbolos: %d\n", otros);

    return 0;







}
