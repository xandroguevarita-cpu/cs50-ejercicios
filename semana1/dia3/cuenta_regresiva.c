#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char confirmacion;
    do
    {
        confirmacion = get_char("Confirmar despegue ? (s/n) :  ");
    }
    while (confirmacion != 's' && confirmacion != 'S');

    for (int i = 10; i >= 1; i--)
    {
        printf("%i\n", i);
    }
    printf("¡Despegue!\n");
    return 0;
}
