#include <stdio.h>
#include "cs50.h"
int main(void){
//Pedir año de nacimiento para buscar cuanto tendra en el 2026
int nacimiento=get_int("En que año naciste : ");
int edad = 2026 - nacimiento ;
printf("Usted el 2026 cumplira %d años \n", edad );

    return 0;
}
