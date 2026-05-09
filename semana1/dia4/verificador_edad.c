/*
FUNCIÓN es_mayor_de_edad(edad)
    SI edad >= 18
        RETORNAR 1
    SI NO
        RETORNAR 0
    FIN SI
FIN FUNCIÓN

INICIO
    Pedir edad al usuario → guardar en variable edad
    Llamar a es_mayor_de_edad(edad) → guardar resultado en variable mayor
    SI mayor == 1
        Mostrar "Es mayor de edad."
    SI NO
        Mostrar "Es menor de edad."
    FIN SI
FIN
*/

#include <stdio.h>
#include "cs50.h"

int es_mayor_de_edad(int edad)
{
    if (edad >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int años = get_int("Diga su edad: ");
    int resultado = es_mayor_de_edad(años);

    if (resultado == 1)
    {
        printf("El usuario es mayor de edad.\n");
    }
    else
    {
        printf("El usuario es menor de edad.\n");
    }

    return 0;
}