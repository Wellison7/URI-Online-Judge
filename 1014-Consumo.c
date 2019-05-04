#include <stdio.h>

int main ()
{
	int x; // km
	float y, media; // litros e média

	scanf("%d %f", &x, &y); 
	
	// faz o calculo
	media = x / y;

	printf("%.3f km/l\n", media);

return 0;
} 
