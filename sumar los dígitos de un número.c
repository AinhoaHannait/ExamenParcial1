#include <stdio.h>

//ingresas un número y te suma los dígitos
int main ()
{
	int numero;
	int suma = 0;
	
	printf ("escribe un numero y sumare sus digitos\n");
	scanf ("%d", &numero);
	
	while (numero>0)
	{
		suma = suma + numero%10;
		numero = numero/10;
		
	}
	printf ("el resultado es:%d", suma);
	
	
	
	return 0;
}
