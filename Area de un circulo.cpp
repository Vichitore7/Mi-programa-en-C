
#include <stdio.h>

void main(void)
{
	float pi;
	float radio;
	float area;
	printf("radio:");
	scanf_s("%f", &radio);
	pi = 3.1416;
	area = pi * radio * radio;
	printf("el area del circulo es %f", area);
}
