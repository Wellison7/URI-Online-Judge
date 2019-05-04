#include <stdio.h>

int main ()
{
	int n, d100, d50, d20, d10, d5, d2, d1; // n = valor

	scanf("%d", &n);
	printf("%d\n", n);	

	// Faz os calculos:
	d100 = n / 100;
	n = n % 100;

	d50 = n / 50;
	n = n % 50;

	d20 = n / 20;
	n = n % 20;

	d10 = n / 10;
	n = n % 10;

	d5 = n / 5;
	n = n % 5;

	d2 = n / 2;
	n = n % 2;
	
	d1 = n / 1;

	printf("%d nota(s) de R$ 100,00\n", d100);
	printf("%d nota(s) de R$ 50,00\n", d50);
	printf("%d nota(s) de R$ 20,00\n", d20);
	printf("%d nota(s) de R$ 10,00\n", d10);
	printf("%d nota(s) de R$ 5,00\n", d5);
	printf("%d nota(s) de R$ 2,00\n", d2);
	printf("%d nota(s) de R$ 1,00\n", d1);


return 0;
} 
