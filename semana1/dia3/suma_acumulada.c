#include <stdio.h>
#include "cs50.h"

int main(void)
{
float precio;
float acumulado = 0.0 ;
do
{
precio = get_float("Precio del producto : ");

if (precio > 0)
{
    acumulado = acumulado + precio;
}
else if (precio < 0)
{
    printf("Error: No se aceptan precios negativos.\n");
}
}
while (precio !=0);
printf("Total a pagar : %.2f $ \n",acumulado);
return 0 ;
}
