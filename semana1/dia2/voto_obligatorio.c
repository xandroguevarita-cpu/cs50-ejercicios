#include <stdio.h>
#include "cs50.h"

int main(void)
{

int edad = get_int("Hola, introduzca su edad: ");

// 1. Prioridad máxima: ¿Es obligatorio hoy? (desde los 18 hasta los 69)
if (edad >= 18 && edad < 70)
{
    printf("Voto obligatorio.\n");
}
// 2. Segunda prioridad: ¿Está en el padrón pero no es obligatorio? (16-17 o 70+)
else if ( (edad >= 16 && edad < 18) || (edad >= 70) )
{
    printf("Voto no obligatorio.\n");
}
// 3. Resto: No cumple ninguna de las anteriores (menores de 16)
else
{
    printf("No habilitado para votar.\n");
}


  return 0;
}
