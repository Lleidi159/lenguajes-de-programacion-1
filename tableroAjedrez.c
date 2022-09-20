/**************************
Realizo: diego Marquez 
Fecha 20 de septiembre 2022
Manejo de numeros muy grandes en c, el tablero de ajedrez
************************/
#include <stdio.h>

int main()
{
	int i;
	float res=1;
	for (i=1;i<=64;i++)
	{
		printf("casilla %d= %.0f\n",i,res);
		res=res*2;
	}
	
return 0;
}
