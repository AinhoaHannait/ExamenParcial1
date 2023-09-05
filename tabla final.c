#include <stdio.h>
#include <math.h>
//obtener la tabla de multiplicar de un número

int main ()
{
	int numero, resultado;
	int multiplo = 1;
	
	
	printf ("Ingresa un numero y te mostrare sus multiplos del 1 al 10\n");
	scanf ("%d", &numero );


	while (multiplo<=10)
	{ 
		resultado = numero * multiplo;
		printf ("%d x %d = %d \n", numero, multiplo, resultado);
		multiplo ++;
	
		
	}
	
	return 0;
}
