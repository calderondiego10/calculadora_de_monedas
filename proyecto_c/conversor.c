#include <stdio.h>

// Tasas de cambio (puedes actualizarlas según las tasas actuales)
#define GTQ_TO_USD 0.13
#define GTQ_TO_EUR 0.12
#define GTQ_TO_RUP 11.29
#define USD_TO_GTQ 7.85
#define USD_TO_EUR 0.92
#define USD_TO_RUP 86.95
#define EUR_TO_GTQ 8.50
#define EUR_TO_USD 1.09
#define EUR_TO_RUP 82.89
#define RUP_TO_GTQ 0.089
#define RUP_TO_EUR 0.011
#define RUP_TO_USD 0.012

// Función para realizar la conversión
double convertirMoneda(double cantidad, int opcion) {
    switch(opcion) {
        case 1: return cantidad * GTQ_TO_USD; // Quetzales a Dólares
        case 2: return cantidad * GTQ_TO_EUR; // Quetzales a Euros
	case 3: return cantidad * GTQ_TO_RUP; // Quetzales a Rupias Indias
        case 4: return cantidad * USD_TO_GTQ; // Dólares a Quetzales
        case 5: return cantidad * USD_TO_EUR; // Dólares a Euros
	case 6: return cantidad * USD_TO_RUP; // Dolares a Rupias Indias
        case 7: return cantidad * EUR_TO_GTQ; // Euros a Quetzales
        case 8: return cantidad * EUR_TO_USD; // Euros a Dólares
	case 9: return cantidad * EUR_TO_RUP; // Euros a Rupias Indias
	case 10: return cantidad * RUP_TO_GTQ; // Rupias Indias a Quetzales
	case 11: return cantidad * RUP_TO_USD; // Rupias Indias a Dolares
	case 12: return cantidad * RUP_TO_EUR; // Rupias Indias a Euros
        default: return 0;
    }
}

int main() {
    int opcion;
    double cantidad, resultado;

    printf("=== Conversor de Monedas ===\n");
    printf("Seleccione la conversión deseada:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Quetzales a Rupias Indias\n");
    printf("4. Dólares a Quetzales\n");
    printf("5. Dólares a Euros\n");
    printf("6. Dolares a Rupias Indias\n");
    printf("7. Euros a Quetzales\n");
    printf("8. Euros a Dolares\n");
    printf("9. Euros a Rupias Indias\n");
    printf("10. Rupias Indias a Quetzales\n");
    printf("11. Rupias Indias a Dolares\n");
    printf("12. Rupias Indias a Euros\n");
    printf("Ingrese su opción (1-12): ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > 12) {
        printf("Opción no válida. Intente de nuevo.\n");
        return 1;
    }

    printf("Ingrese la cantidad a convertir: ");
    scanf("%lf", &cantidad);

    resultado = convertirMoneda(cantidad, opcion);
    
    if (resultado == 0) {
        printf("Error en la conversión.\n");
    } else {
        printf("El monto convertido es: %.2f\n", resultado);
    }

    return 0;
}
