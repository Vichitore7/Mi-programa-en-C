// Area de un cuadrado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

void main(void)
{
    int L1;
    int L2;
    int area;
    printf("L1:");
    scanf_s("%i", &L1);
    printf("L2:");
    scanf_s("%i", &L2);
    scanf_s("&i", &area);
    area = L1 * L2;
    printf("El area del cuadraro es %i", area);
}
