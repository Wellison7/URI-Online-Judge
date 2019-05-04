#include <stdio.h>
#define pi 3.14159

int main ()
{	
	double a, b, c, tri, cir, tra, qua, ret; // declaração das entradas e áreas
	scanf("%lf %lf %lf", &a, &b, &c); // lê as entradas

	// calcúla as áreas:
	tri = a * c / 2;
	cir = pi * (c * c);
	tra = (a + b) * c / 2;
	qua = b * b;
	ret = a * b;

    // imprime os resultados
	printf("TRIANGULO: %.3lf\n", tri);
	printf("CIRCULO: %.3lf\n", cir);
	printf("TRAPEZIO: %.3lf\n", tra);
	printf("QUADRADO: %.3lf\n", qua);
	printf("RETANGULO: %.3lf\n", ret);
	
return 0;
}