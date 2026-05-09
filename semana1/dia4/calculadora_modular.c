#include <stdio.h>
#include "cs50.h"

void saludar(string nombre);
void mostrar_menu_principal(void);
void mostrar_menu_operaciones(void);
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
void despedirse(string nombre);

int main(void)
{
    string nombre = get_string("Cual es su nombre? ");
    saludar(nombre);

    char continuar;
    do
    {
        int opcion_principal;
        do
        {
            mostrar_menu_principal();
            opcion_principal = get_int("Elija una opcion: ");
            if (opcion_principal != 1 && opcion_principal != 2)
            {
                printf("Opcion no valida.\n");
            }
        }
        while (opcion_principal != 1 && opcion_principal != 2);

        if (opcion_principal == 2)
        {
            despedirse(nombre);
            return 0;
        }

        int primer_numero = get_int("Primer numero: ");
        int operacion;
        do
        {
            mostrar_menu_operaciones();
            operacion = get_int("Elija una operacion (1-4): ");
            if (operacion < 1 || operacion > 4)
            {
                printf("Opcion no valida.\n");
            }
        }
        while (operacion < 1 || operacion > 4);

        int segundo_numero = get_int("Segundo numero: ");

        switch (operacion)
        {
            case 1:
                printf("Resultado: %i\n", sumar(primer_numero, segundo_numero));
                break;
            case 2:
                printf("Resultado: %i\n", restar(primer_numero, segundo_numero));
                break;
            case 3:
                printf("Resultado: %i\n", multiplicar(primer_numero, segundo_numero));
                break;
            case 4:
            {
                float resultado_div = dividir(primer_numero, segundo_numero);
                if (segundo_numero != 0)
                {
                    printf("Resultado: %.2f\n", resultado_div);
                }
                break;
            }
            default:
                printf("Opcion no valida.\n");
                break;
        }

        continuar = get_char("Desea hacer otra operacion? (s/n): ");
    }
    while (continuar == 's' || continuar == 'S');

    despedirse(nombre);
    return 0;
}

void saludar(string nombre)
{
    printf("Bienvenido/a, %s!\n", nombre);
}

void mostrar_menu_principal(void)
{
    printf("\n--- MENU PRINCIPAL ---\n");
    printf("1. Calcular\n");
    printf("2. Salir\n");
}

void mostrar_menu_operaciones(void)
{
    printf("\n--- OPERACIONES ---\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
}

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division por cero.\n");
        return 0;
    }
    return (float) a / b;
}

void despedirse(string nombre)
{
    printf("\nGracias por usar la calculadora, %s. Hasta pronto!\n", nombre);
}