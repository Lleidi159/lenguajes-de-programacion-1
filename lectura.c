/********************************************************
Realizo: Diego Marquez
Fecha 23 ago del 2022
Manejo de operadores l+ogicos y de relacion 
lectura por teclado
lectura.c
*********************************************************/
#include<stdio.h>

int main()
{
	int val_1;
	int val_2;
	printf("Vamos a capturar 2 valores y comparar si son iguales\n ");
	printf("Escribe el primer valor; ");
	scanf("%d",&val_1);
	printf("Escribe el segundo valor:");
	scanf("%d",&val_1);
	if(val_1==val_2)
	{
		printf("Los valores son iguales\n");
	}
	else if (val_1>val_2)
	{
		printf("valor1 es mayor que valor2\n");
	}
	else 
	{
		printf("valor2 es mayor que valor1");
	}
	
	return (0);
}
