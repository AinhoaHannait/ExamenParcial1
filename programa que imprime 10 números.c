#include <stdio.h>

//programa que te da los siguientes 10 numeros
int main()
{
 	int respuesta, respuesta2, suma;

	 
	
	printf ("¿Quieres imprimir 10 numeros? 1=Sí 2=No\n");
	scanf ("%d",&respuesta);
	if (respuesta==1)
	{
		printf ("\n Dame un número e imprimire los siguientes 10\n");
		scanf ("%d", &respuesta2);
		suma=respuesta2 + 1;
		while (suma<=respuesta2+10)
		{
			printf("%d\n", suma);
			suma++;
		}
	}
	else
	{
		printf ("Eso es todo lo que puedo hacer por ti");
	}
	
	
	return 0;
}

 
