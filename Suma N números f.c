#include <stdio.h>

// ingresas dos n�meros y el programa sumar� todos los enteros entre esos dos n�meros

int main ()
{
	int s, n, a;
	
	printf("Ingresa el rango de numeros enteros consecutivos que quieras sumar\n"
	"NOTA: Escribe el primer numero y presiona enter para escribir el ultimo numero\n");
	scanf("%d", &a);
	scanf("%d", &n);
	s=((n*(n+1))-(a*(a-1)))/2;
	printf("El resultado es:%d", s);
	
	return 0;
}
