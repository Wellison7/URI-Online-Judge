#include <stdio.h>

int main ()
{	
	int cod1, cod2, np1, np2;
	float valor_p1, valor_p2, total;

	scanf("%d %d %f\n%d %d %f", &cod1, &np1, &valor_p1, &cod2, &np2, &valor_p2);
	total = (np1 * valor_p1) + (np2 * valor_p2);
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
return 0;
}