#include <stdio.h>

int main ()
{
	int h, vel_med;
	float litros;

	scanf("%d %d", &h, &vel_med);

	// Média de km/l é 12L
	// Calcula média:
	litros = h * vel_med / 12.0;

	printf("%.3f\n", litros);

return 0;
} 
