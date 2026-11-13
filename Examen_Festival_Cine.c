//festival de cine que cuenta con 8 salas y como maximo 60 peliculas en cartelera.
//primero se ingresa la cantidad de pelis a cargar (int, >1 y <60)
//luego por cada peli se ingresa:
//codigo de pelicula (entero, > 0, sin repetirse)
//codigo de la entrada (float, > 0)


//a) para cada sala mostrar la cantidad de espectadores y el importe recaudado con titulos.
//b) El promedio de dinero recaudado por espectador en cada sala que realizo al menos una funcion.
//c) El numero de sala con mayor cantidad de espectadores. Puede haber mas de una.
//d) Los codigos de las peliculas que no vendieron ninguna entrada.

#include <stdio.h>
#define MAX_SALAS 8
#define MAX_PELICULAS 60
//prototipos
int PeliculasEnRango(int peliculas);
int EstaRepetido(int cartelera[], int CantCargadas, int codigos);
int ValidarSala(int NumeroDeSala);
int BuscarPelicula(int cartelera[], int cantPeliculas,int codigobuscado);
int ValidarEspectadores(int Espectadores);
void InformarMaximoEspectadores(int espectadoresSalas[], int salasIDs[]);
void InformarPeliculasSinVentas(int cartelera[], int ventasPeliculas[], int CantPeliculas);

int main()
{
    int cartelera[MAX_PELICULAS], NumSala, cantEspectadores,  posPeli;
    float PrecioEntrada[MAX_PELICULAS];

    //vectores acumuladores para las salas (del indice 0 al 7)
    int espectadoresSalas[MAX_SALAS]= {0};
    float dinerosSalas[MAX_SALAS]= {0};
    int salasIDs[MAX_SALAS]={1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008};

    //vector contador para saber cuantas entradas vendio cada peli.
    int VentasPeliculas[MAX_PELICULAS]= {0};

    int CantPeliculas, CodPelicula, CantCargadas, indiceSala;
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

        }while (CodPelicula <= 0);

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

    printf("\n========CARGA DE PRIMER LOTE FINALIZADA========\n");
    printf("\t------>   CARGA DE SEGUNDO LOTE   <-----\t\n");
    printf("\nIngrese el Numero de Sala (entre 1001 y 1008) => '1000 para finalizar': ");
    scanf("%d", &NumSala);

    NumSala = ValidarSala(NumSala);

    while(NumSala != 1000)
    {
        printf("\nIngrese el codigo de pelicula: ");
        scanf("%d", &CodPelicula);

        posPeli= BuscarPelicula(cartelera, CantPeliculas, CodPelicula);

        if (posPeli == -1)
        {
            printf("ERROR. El codigo de pelicula no existe en esta funcion.\n");
        }
        else
        {

            printf("Ingrese la cantidad de espectadores(mayor a cero): ");
            scanf("%d", &cantEspectadores);
            cantEspectadores= ValidarEspectadores(cantEspectadores);

            //mapeo del numero de sala (1001-1008)
            indiceSala= NumSala - 1001;

            //acumuladores para el punto a y b.
            espectadoresSalas[indiceSala] += cantEspectadores;
            dinerosSalas[indiceSala] += cantEspectadores * PrecioEntrada[posPeli];

            //acumulamos para las ventas de la peli para el punto d.
            VentasPeliculas[posPeli] += cantEspectadores;

            printf("\nFuncion correctamente procesada.\n");

        }

        printf("\nIngrese el numero de sala (entre 1001 y 1008)- 1000 para finalizar:");
        scanf("%d", &NumSala);
        NumSala= ValidarSala(NumSala);

    for (int i= 0; i < MAX_SALAS; i++)
    {
        printf("\nSala %d;\n", salasIDs[i]);
        printf("-> cantidad total de espectadores: %d\n", espectadoresSalas[i]);
        printf("-> Importe total recaudado: %d\n", dinerosSalas[i]);

        if (espectadoresSalas[i] > 0)
        {
            float promedio= dinerosSalas[i] / espectadoresSalas[i];
            printf("-> Promedio recaudado por espectador: %.2f", promedio);
        }
        else{
            printf("-> Promedio recaudado por espectador: Sin espectadores registrados.\n");

        }

    }
}

    InformarMaximoEspectadores(espectadoresSalas, salasIDs);

    InformarPeliculasSinVentas(cartelera, VentasPeliculas, CantPeliculas);

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
    return 0; //No se repite
}

int ValidarSala(int NumeroDeSala)
{
    while (NumeroDeSala != 1000 && (NumeroDeSala <1001 || NumeroDeSala >1008))
    {
        printf("ERROR. Numero de sala fuera de Rango. Intente nuevamente(1000 para salir): ");
        scanf("%d", &NumeroDeSala);
    }

    return NumeroDeSala;
}


int ValidarEspectadores(int Espectadores)
{
    while (Espectadores <= 0)
    {
        printf("ERROR. La cantidad de espectadores debe ser mayor a cero. Intente nuevamente.\n");
        scanf("%d", &Espectadores);
    }
    return Espectadores;
}


int BuscarPelicula(int cartelera[], int cantPeliculas,int codigoBuscado)
{
    for (int i= 0; i< cantPeliculas; i++)
    {

        if (cartelera[i] == codigoBuscado)
        {
            return i;
        }
    }
    return -1;

}

void InformarMaximoEspectadores(int espectadoresSalas[], int salasIDs[])
{
    int maxEspectadores = -1;

    for (int i= 0; i < MAX_SALAS; i++)
    {
        if (espectadoresSalas[i] > maxEspectadores)
        {
            maxEspectadores= espectadoresSalas[i];

        }
    }
