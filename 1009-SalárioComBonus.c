#include <stdio.h>

int main ()
{	
	char nome[10];
	double vendas, sal_fixo, sal_total;

	scanf("%s %lf %lf", nome, &sal_fixo, &vendas);
	// Calcula comissão, acrescenta no salário e resulta no total
	sal_total = (vendas * 0.15) + sal_fixo;
	printf("TOTAL = R$ %.2lf\n", sal_total);
	
return 0;
}