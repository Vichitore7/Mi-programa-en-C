// Area de un cuadrado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

void main(void)
{
    int base;
    int altura;
    int area;
    printf("base:");
    scanf_s("%i", &base);
    printf("altura:");
    scanf_s("%i", &altura);
    scanf_s("&i", &area);
    area = base * altura;
    printf("El area del rectangulo es %i", area);
}
