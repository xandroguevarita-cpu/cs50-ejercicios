#include <stdio.h>
#include "cs50.h"
int main(void){
int primer_numero = get_int("Dime cual es el primer numero : ");
int segundo_numero = get_int("Dime cual es el segundo numero : ");
int resultado = primer_numero + segundo_numero ;
printf("El resultado es %d \n", resultado);
return 0 ;
}
