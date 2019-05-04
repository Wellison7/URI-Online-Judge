#include <stdio.h>

int main ()
{
	int km, min;

	scanf("%d", &km);

	/*
	calcula tempo para se distaciar
	regra de 3:
	60	_	30
	min	_	km
	*/

	min = (km * 60) / 30;

	printf("%d minutos\n", min);

return 0;
} 
