#include <stdio.h>

// ============================================================================
// PROTOTIPOS DE FUNCIONES
// ============================================================================
int EsOrdenCreciente(float v1, float v2, float v3);
float ObtenerMayor(float v1, float v2, float v3);
float CalcularPromedio(float v1, float v2, float v3);
float CalcularSuma(float v1, float v2, float v3);
int MostrarMenu(void);

// ============================================================================
// FUNCIÓN PRINCIPAL
// ============================================================================
int main() {
    float v1, v2, v3;
    int opcion;

    printf("=== PROCESAMIENTO DE TERNAS REALES ===\n");

    // Ingreso de la primera terna
    printf("\nIngrese los 3 valores reales de la terna (ej: 12.5 8.3 20.0): ");
    scanf("%f %f %f", &v1, &v2, &v3);
    while (getchar() != '\n');

    // Bucle principal: se repite MIENTRAS NO sea una terna ordenada en forma creciente
    while (!EsOrdenCreciente(v1, v2, v3)) {

        // Bucle del menú interactivo para la terna actual
        do {
            printf("\n--- Terna actual: [%.2f, %.2f, %.2f] ---\n", v1, v2, v3);
            opcion = MostrarMenu();

            switch (opcion) {
                case 1:
                    printf("\n>> Mayor valor de la terna: %.2f\n", ObtenerMayor(v1, v2, v3));
                    break;
                case 2:
                    printf("\n>> Promedio de la terna: %.2f\n", CalcularPromedio(v1, v2, v3));
                    break;
                case 3:
                    printf("\n>> Suma de la terna: %.2f\n", CalcularSuma(v1, v2, v3));
                    break;
                case 4:
                    printf("\nFinalizando procesamiento de la terna actual...\n");
                    break;
            }

        } while (opcion != 4);

        // Solicitud de la siguiente terna
        printf("\n--------------------------------------------------\n");
        printf("Ingrese la siguiente terna de valores reales: ");
        scanf("%f %f %f", &v1, &v2, &v3);
        while (getchar() != '\n');
    }

    printf("\n==================================================\n");
    printf("¡Terna ordenada en forma creciente detectada (%.2f < %.2f < %.2f)!\n", v1, v2, v3);
    printf("Programa finalizado correctamente.\n");
    printf("==================================================\n");

    return 0;
}

// ============================================================================
// DESARROLLO DE FUNCIONES
// ============================================================================

// 1. Detecta si los valores ingresados están ordenados de forma creciente (v1 < v2 < v3)
int EsOrdenCreciente(float v1, float v2, float v3) {
    if (v1 < v2 && v2 < v3) {
        return 1; // Verdadero
    }
    return 0; // Falso
}

// 2. Opción 1: Retorna el mayor valor de la terna
float ObtenerMayor(float v1, float v2, float v3) {
    float mayor = v1;
    if (v2 > mayor) mayor = v2;
    if (v3 > mayor) mayor = v3;
    return mayor;
}

// 3. Opción 2: Retorna el promedio de la terna[cite: 8]
float CalcularPromedio(float v1, float v2, float v3) {
    return (v1 + v2 + v3) / 3.0f;
}

// 4. Opción 3: Retorna la suma de los valores de la terna[cite: 8]
float CalcularSuma(float v1, float v2, float v3) {
    return v1 + v2 + v3;
}

// 5. Muestra el menú exacto solicitado y valida la opción (entre 1 y 4)[cite: 8]
int MostrarMenu(void) {
    int opcion;

    do {
        printf("\n   ** OPCIONES POSIBLES **\n");
        printf("   1 - Mayor valor de la terna\n");
        printf("   2 - Promedio de la terna\n");
        printf("   3 - Suma de la terna\n");
        printf("   4 - Finalizar\n");
        printf("   ** Digite su opción: ");

        scanf("%d", &opcion);
        while (getchar() != '\n'); // Limpieza de búfer

        if (opcion < 1 || opcion > 4) {
            printf("\n[ERROR] Opción no válida. Por favor, reintente.\n");
        }

    } while (opcion < 1 || opcion > 4);

    return opcion;
}





















