//edenorte, factura el consumo de electricidad de sus clientes
#include <stdio.h>

int main()
{
    int codigousuario = 1;
    int estadomedidorActual, estadomedidorPasado;

    float kw ;
    float importeminimo, importexkw;
    float importeacobrar;

    float promediofacturado= 0.0;
    int usuarios_sinconsumo= 0;

    int contadorfacturas= 0;
    float importeTotal= 0.0;

    int codigoMenorconsumo, menorkw= 0, primerConConsumo = 1;

    do
    {
        printf("Ingrese el importe minimo-(consumo que no excendan los 80 KW)-: ");
        scanf("%f", &importeminimo);
        while(getchar() != '\n');

    }
    while(importeminimo <= 0);

    do
    {
        printf("Ingrese el importe de cada KW si supera el importe minimo:");
        scanf("%f", &importexkw);
        while(getchar() != '\n');

    }
    while (importexkw <= 0);

    do
    {
        printf("Ingrese el codigo del usuario -(coloque 0 para finalizar): ");
        scanf("%d", &codigousuario);
        while (getchar() != '\n');

    }
    while (codigousuario < 0);


    while (codigousuario != 0)
    {
        do
        {
            printf("Ingresar el estado del medidor anterior: ");
            scanf("%d", &estadomedidorPasado);
            while (getchar() != '\n');

        }
        while(estadomedidorPasado < 0);

        do
        {
            printf("Ingresar el estado del medidor actual: ");
            scanf("%d", &estadomedidorActual);
            while (getchar() != '\n');

        }
        while (estadomedidorActual <= 0 || estadomedidorActual < estadomedidorPasado);

        kw = estadomedidorActual - estadomedidorPasado;

        if (kw <= 80)
        {
            importeacobrar= importeminimo;
        }
        else
        {
            importeacobrar= importeminimo + ((kw - 80)* importexkw);
        }

        if (kw == 0)
        {
            usuarios_sinconsumo++;
        }

        if (kw > 0)
        {
            if (primerConConsumo || kw < menorkw)
            {
                menorkw= kw;
                codigoMenorconsumo= codigousuario;
                primerConConsumo++;
            }
        }

        importeTotal += importeacobrar ;
        contadorfacturas++;
        importeTotal += importeacobrar ;
        contadorfacturas++;

        printf("\n==========FACTURAS==========\n");
        printf("Codigo de usuario: %d\n", codigousuario);
        printf("Importe a abonar: %.2f\n", importeacobrar);
        printf("Estado del medidor actual %d y estado del medidor anterior %d\n", estadomedidorActual, estadomedidorPasado);
        printf("Consumo del periodo: %d\n", kw);
        printf("\n==============================\n");

        do
        {
            printf("Ingrese el codigo del usuario -(coloque 0 para finalizar): ");
            scanf("%d", &codigousuario);
            while (getchar() != '\n');

        }
        while (codigousuario < 0);
    }

    if(contadorfacturas > 0)
    {
        printf("\n===================RESUMEN====================\n");
        printf("Importe total facturado: %.2f\n", importeTotal);
        printf("Cantidad de facturas emitidas: %d\n", contadorfacturas);
        printf("Promedio de facturado total: %.2f%%\n", importeTotal/ contadorfacturas);
        printf("Cantidad de usuarios sin consumo: %d\n", usuarios_sinconsumo);

        if (codigoMenorconsumo != 0)
        {
            printf("Usuario con menor consumo postivo: Codigo Nro %d (%d kw)\n", codigoMenorconsumo, menorkw);
        }
        else
        {
            printf("No hubo ousuarios con consumo positivo registrados. \n");
        }
        printf("===================================================\n");

    }
    else
    {
        printf("\nNo se registraron facturas.\n");
    }

    return 0;

}
