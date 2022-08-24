/*
Realizo: Lino Carrillo
Fecha: 22 agosto 2022
Programa para conocer el manejo de la condicion if 
*/

#include <stdio.h>
int main ()
{
	int x=5;//con un igual es asignacion
	int y=20;
	if(x==y) // con dos iguales es comparacion
	
	{
		printf("el resultado es igual %d",y);
	}
	else if (x>y)
	{
		printf("x=%d es mayor que y=%d",x,y);
	}
	else
	{
		printf("x=%d es menor que y=%d",x,y);
	}
	
	return(0);
}
