#include <stdio.h>

int main ()
{
	int h, m, s, n;

	scanf("%d", &n);

	// faz o calculo das h:m:s
	h = n / 3600;
		n = n % 3600;
	m = n / 60;
		n = n % 60;
	s = n / 1;
	
	printf("%d:%d:%d\n", h, m, s);

return 0;
} 
