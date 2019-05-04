//Área_1012

#include <stdio.h> 
#define pi 3.14159

int main ()
{
	double a, b, c; // entrada
	double tri, qua, cir, tra, ret; // saída

	scanf("%lf %lf %lf", &a, &b, &c);

	// calcula as áreas
	tri = a * c / 2.0;
	cir = pi * (c * c);
	tra = (a + b) / 2.0 * c;
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
 

