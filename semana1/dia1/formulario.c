#include <stdio.h>
#include "cs50.h"
int main(void){
string nombre = get_string("Introduzca su nombre : ");
int edad = get_int("Introduzca su edad : ");
string ciudad = get_string("Introduzca la ciudad donde vive : ");
printf("            \n---Ficha---\n");
printf(" Nombre : %s \n",nombre);
printf(" Edad : %d \n",edad);
printf(" Ciudad : %s \n ",ciudad);

    return 0;
}
