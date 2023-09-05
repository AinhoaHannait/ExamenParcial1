#include <stdio.h>
#include <math.h>
//ingresar numeros y que se detenga cuando encuentre un numero negativo

int main()
{
	float numero;
	
	printf ("ingresa un numero, me detendre hasta encontrar uno negativo\n");
	scanf ("%f", &numero);
	
	while (numero>=0)
	{
		printf ("es un numero positivo\n");
		scanf ("%f", &numero);
		
	}
	if (numero<0)
	{
		printf("Es un numero negativo");
	}
	
	
	return 0;
}
