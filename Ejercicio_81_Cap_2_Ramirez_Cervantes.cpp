#include <iostream>

int main()
{
	printf(" Ejercicio 81 Capitulo 2. Imprimir las ecuaciones de las lineas paralelas y perpendiculares a la linea representada por 6x - 18y = 36, que pasa por el punto (-6, -2).\n");

	int A = 6;
	int B = -18;
	int C = 36;
	int x = -6;
	int y = -2;
	float m = -((float)A / (float)B);
	float b = (float)(-(m * (A)) - (C / B));
	float mp = (float)(-1 * (-(B / A)));
	float bp = (float)((mp * (x)) - (C / B));

	printf("\n La ecuacion de linea paralela es: y = %fx + (%f)\n", m, b);
	printf("\n La ecuacion de linea perpendicular es: y = %fx + (%f)\n", mp, bp);
}