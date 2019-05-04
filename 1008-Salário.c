#include <stdio.h>

int main ()
{
	int num, ht;
	float SalTotal, SalHora;
	
	scanf("%d %d %f", &num, &ht, &SalHora);
	SalTotal = SalHora * ht;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, SalTotal);
	

return 0;
}