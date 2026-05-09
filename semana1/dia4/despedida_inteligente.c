#include <stdio.h>
#include "cs50.h"

void despedirse(string nombre)
{
    printf("Gracias por usar la calculadora, %s. Le esperamos de vuelta.\n", nombre);
}

int main(void)
{
    string nombre;
    nombre = get_string("Introduzca su nombre: ");
    despedirse(nombre);
    return 0;
}