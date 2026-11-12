//festival de cine que cuenta con 8 salas y como maximo 60 peliculas en cartelera.
//primero se ingresa la cantidad de pelis a cargar (int, >1 y <60)
//luego por cada peli se ingresa:
//codigo de pelicula (entero, > 0, sin repetirse)
//codigo de la entrada (float, > 0)

#include <stdio.h>
#define MAX_SALAS 8
#define MAX_PELICULAS 60
int PeliculasEnRango(int peliculas);
int EstaRepetido(int cartelera[], int CantCargadas, int codigos);


int main()
{
    int salas[MAX_SALAS], cartelera[MAX_PELICULAS];
    float PrecioEntrada[MAX_PELICULAS];

    int CantPeliculas, CodPelicula, CantCargadas;
    float Precio;

    printf("Ingresar la cantidad de peliculas a cargar: ");
    scanf("%d", &CantPeliculas);

    CantPeliculas= PeliculasEnRango(CantPeliculas);

    for (int i= 0; i < CantPeliculas; i++)
    {
        do
        {
            printf("\nIngrese el codigo de la pelicula %d (mayor a 0): ", i +1);
            scanf("%d", &CodPelicula);

            if (CodPelicula <= 0)
            {
                printf("\nError.El codigo debe ser mayor a cero.\n");
            }
            else if (EstaRepetido(cartelera, i, CodPelicula))
            {
                printf("\nError.El codigo de pelicula ya existe. Ingrese uno nuevo.\n");
                CodPelicula= 0; //aca basicamente se fuerza para que repita el do-while en caso de que ya halla un codigo.
            }

        }
        while (CodPelicula <= 0);

        cartelera[i]= CodPelicula;

        do
        {
            printf("\nIngresar el precio de la entrada para esta pelicula (mayor a cero): ");
            scanf("%f", &PrecioEntrada[i]);

            if (PrecioEntrada[i]<= 0)
            {
                printf("\nError.El precio debe ser mayor a cero.\n");
            }
        }while (PrecioEntrada[i] <= 0);
    }

    return 0;
}

int PeliculasEnRango (int pelicula)
{
    while (pelicula < 1 || pelicula > 60)
    {
        printf("Pelicula fuera de Rango. Intente nuevamente.\n");
        scanf("%d", &pelicula);
    }
    return pelicula;
}


int EstaRepetido(int cartelera[], int CantCargadas, int codigos)
{
    for (int j= 0; j < CantCargadas; j++)
    {
        if (cartelera [j]== codigos)
        {
            return 1; //se repite
        }
    }
    return 0;
}

