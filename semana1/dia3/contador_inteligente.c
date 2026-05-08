#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int numero_operario;
    do
    {
        numero_operario = get_int("Indique hasta qué número quiere contar: ");
    }
    while (numero_operario < 1 || numero_operario > 100);

    for (int i = 1; i <= numero_operario; i++)
    {
        printf("%i\n", i);
    }

    return 0;
}

