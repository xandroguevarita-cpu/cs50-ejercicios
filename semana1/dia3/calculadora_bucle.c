/*
 * Calculadora Interactiva con Repetición
 * Versión 3.0 – Día 3
 *
 * Flujo respetado: primer número → operación → segundo número → resultado
 * La decisión de continuar o salir está fuera del menú de operaciones.
 */

#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char continuar;

    // Bucle principal: se repite mientras el usuario quiera
    do
    {
        // 1. Pedir primer número
        int primer_numero = get_int("Primer número: ");

        // 2. Mostrar menú de operaciones
        printf("Operaciones disponibles:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");

        // 3. Validar operación (solo 1-4)
        int operacion;
        do
        {
            operacion = get_int("Elija una operación (1-4): ");
        }
        while (operacion < 1 || operacion > 4);

        // 4. Pedir segundo número
        int segundo_numero = get_int("Segundo número: ");

        // 5. Calcular y mostrar resultado
        if (operacion == 4 && segundo_numero == 0)
        {
            printf("Error: División por cero.\n");
        }
        else
        {
            switch (operacion)
            {
                case 1:
                    printf("Resultado: %i\n", primer_numero + segundo_numero);
                    break;
                case 2:
                    printf("Resultado: %i\n", primer_numero - segundo_numero);
                    break;
                case 3:
                    printf("Resultado: %i\n", primer_numero * segundo_numero);
                    break;
                case 4:
                    printf("Resultado: %i\n", primer_numero / segundo_numero);
                    break;
                            default:
            printf("Opción no válida.\n");
            break;
            }
        }

        // 6. Preguntar si desea continuar
        continuar = get_char("¿Desea hacer otra operación? (s/n): ");

    }
    while (continuar == 's' || continuar == 'S');

    printf("Gracias por usar la calculadora.\n");
    return 0;
}
