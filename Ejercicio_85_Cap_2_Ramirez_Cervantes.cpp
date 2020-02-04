#include <iostream>

int main()
{ 
	printf(" Ejercicio 85 Capitulo 2. Imprimir la pendiente de la recta con una intercepcion y de (0, 10) y un punto (-3, 0). \n");
	
	int X1 = 0;
	int Y1 = 10;
	int X2 = -3;
	int Y2 = 0;
	float m = (float)(Y2 - (Y1)) / (X2 - (X1));

	printf("\n La pendiente de la recta es: %f \n", m);
}
