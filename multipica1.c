/********************************
Realizo: Diego Marquez 
Fecha: 24 de agosto del 2022
programa para generar una tabla de multiplicar indicada por el ususrio
multiplica1.c
*********************************/
#include<stdio.h>

int main()
{
	int tabla;
	int result;
	int contador=1;
	printf("cual tabla de multiplicar quieres imprimir: ");
	scanf("%d",&tabla);
	while(contador<=10)
	{
		result=contador*tabla;
		printf("%d x %d = %d\n",tabla,contador,result);
		contador++;
	}
	
	return(0);
}
