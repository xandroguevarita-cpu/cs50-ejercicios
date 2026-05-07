#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // 1. Pedir el primer número
    int primer_numero = get_int("Primer número: ");

    // 2. Mostrar menú y pedir operación
    printf("Operaciones disponibles:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    int operacion = get_int("Elija una operación (1-4): ");

    // 3. Pedir el segundo número
    int segundo_numero = get_int("Segundo número: ");

    // 4. Lógica de cálculo con switch y validación
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
            if (segundo_numero == 0)
            {
                printf("Error: División por cero.\n");
            }
            else
            {
                printf("Resultado: %i\n", primer_numero / segundo_numero);
            }
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}
