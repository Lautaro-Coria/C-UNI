#include <stdio.h>

#include <stdio.h>
#include <ctype.h>

int main() {
    char codigo;
    float importeBase;
    float importeFinal;

    // Acumuladores inicializados en 0.0
    float totalEfectivo = 0.0;
    float totalTarjeta = 0.0;
    float totalCheque = 0.0;
    float totalVentas = 0.0;
    float totalIVA = 0.0;

    // Validación del primer código de cobro con do-while
    do {
        printf("Ingrese el codigo de cobro (E: Efectivo, C: Cheque, T: Tarjeta, F: Finalizar): ");
        scanf("%c", &codigo);
        while (getchar() != '\n'); // Limpieza estructurada del buffer
        codigo = toupper(codigo);   // Normalizamos la letra a mayúscula

        if (codigo != 'E' && codigo != 'C' && codigo != 'T' && codigo != 'F') {
            printf("Codigo invalido. Ingrese E, C, T o F.\n");
        }
    } while (codigo != 'E' && codigo != 'C' && codigo != 'T' && codigo != 'F');

    // Bucle principal de ingreso de ventas
    while (codigo != 'F') {

        // Validación del importe ingresado con do-while
        do {
            printf("Ingrese el importe de la venta: ");
            scanf("%f", &importeBase);
            while (getchar() != '\n');

            if (importeBase <= 0) {
                printf("El importe debe ser un valor positivo mayor a 0.\n");
            }
        } while (importeBase <= 0);

        // Evaluación de descuentos y recargos con sentencias if independientes
        if (codigo == 'E') {
            importeFinal = importeBase * 0.90; // 10% de descuento
            totalEfectivo = totalEfectivo + importeFinal;
        }

        if (codigo == 'C') {
            importeFinal = importeBase * 1.20; // 20% de recargo
            totalCheque = totalCheque + importeFinal;
        }

        if (codigo == 'T') {
            importeFinal = importeBase * 1.12; // 12% de recargo
            totalTarjeta = totalTarjeta + importeFinal;
        }

        // Acumulación general de ventas
        totalVentas = totalVentas + importeFinal;

        // Lectura y validación del siguiente código de cobro
        do {
            printf("\nIngrese otro codigo (E, C, T, F para finalizar): ");
            scanf("%c", &codigo);
            while (getchar() != '\n');
            codigo = toupper(codigo);

            if (codigo != 'E' && codigo != 'C' && codigo != 'T' && codigo != 'F') {
                printf("Codigo invalido. Ingrese E, C, T o F.\n");
            }
        } while (codigo != 'E' && codigo != 'C' && codigo != 'T' && codigo != 'F');
    }

    // Cálculo del 21% de IVA sobre el total acumulado de ventas
    totalIVA = totalVentas * 0.21;

    // Reporte final por pantalla

    printf("Efectivo en Caja: $%.2f\n", totalEfectivo);
    printf("Ventas con Tarjeta de Credito: $%.2f\n", totalTarjeta);
    printf("Ventas con cheque: $%.2f\n", totalCheque);
    printf("Total de Venta: $%.2f\n", totalVentas);
    printf("Importe del IVA: $%.2f\n", totalIVA);
    printf("===================================================\n");

    return 0;
}
