#include <iostream>

int main()
{
	printf(" Ejercicio 83 Capitulo 2. Determinar la ecuacion de la recta que pasa por los puntos (56, 16) y (-40, 1).\n");
	
	int X1 = 56;
	int Y1 = 16;
	int X2 = -40;
	int Y2 = 1;
	float m = (float)(Y2 - Y1) / (float)(X2 - X1);
	float b = (float)(-(X1 * m) + Y1);

	printf("\n Pendiente: %f", m);
	printf("\n Interseccion de y: %f", b);
	printf("\n La ecuacion de la recta que pasa por los puntos (%d,%d) y (%d,%d) es: \n y = %fx + (%f) \n", X1, Y1, X2, Y2, m, b);
}