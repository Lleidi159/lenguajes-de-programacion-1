/********************************
Realizo: Diego Marquez 
Fecha: 24 de agosto del 2022
estructuras de control
        while 
        ciclo.c
*********************************/
#include<stdio.h>
int main()
{
	int contador, num;
	contador=1;
	printf("Escribe un numero entero:  ");
	scanf("%d",&num);
	while (contador <=num)//se ejecta el printf y el contador mientras se cumpla la condicion
	{
		printf("contador= %d", contador);
		contador++;// esto es igual a escribir contador=contador + 1
	}
	
	return(0);
}
