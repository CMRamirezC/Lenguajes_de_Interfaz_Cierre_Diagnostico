#include <iostream>

int main()
{
	printf(" Ejercicio 84 Capitulo 2. Determinar la ecuacion de la recta descrita por la pendiente = 3 y el punto sobre la recta (8, -4). \n");

	int X = 8;
	int Y = -4;
	float m = 3;
	float b = (float)(-(X * m) + Y);

	printf("\n Interseccion de y: %f", b);
	printf("\n La ecuacion de la recta que pasa por los puntos (%d,%d) y con una pendiente de %f, es: \n y = %fx + (%f) \n", X, Y, m, m, b);
}