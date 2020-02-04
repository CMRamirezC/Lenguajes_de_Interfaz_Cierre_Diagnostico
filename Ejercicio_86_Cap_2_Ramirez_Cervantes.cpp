#include <iostream>

int main()
{
	printf(" Ejercicio 86 Capitulo 2. Encontrar la pendiente y las intercecciones (x, y) de la grafica de la ecuacion 2x + 3y + 8 = 0. \n");
	
	int A = 2;
	int B = 3;
	int C = 8;
	float m = (-((float)A / (float)B));
	float y = (-((float)C / (float)B));
	float x = (-((float)C / (float)A));

	printf("\n La pendiente de la ecuacion %dx + %dy + %d es: %f \n", A, B, C, m);
	printf("\n La interseccion de la ecuacion en eje Y es: (0, %f) \n", y);
	printf("\n La interseccion de la ecuacion en eje X es: (%f, 0) \n", x);
}