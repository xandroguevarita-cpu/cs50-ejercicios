#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int numero = get_int("Introduzca un número entero: ");

    if (numero > 0)
    {
        printf("El número es positivo.\n");
    }
    else if (numero < 0)
    {
        printf("El número es negativo.\n");
    }
    else
    {
        printf("El número es cero.\n");
    }

    return 0;
}
