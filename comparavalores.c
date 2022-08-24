/********************************
Realizo: Diego Marquez 
Fecha: 24 de agosto del 2022
programa para generar una tabla de multiplicar indicada por el ususrio
multiplica1.c
*********************************/
#include<stdio.h>
#include<conio.h>
int main()
{
	int valor;
	do{
		printf("ingrese un valor entre 0 y 999 (0 es para finalizar)");
		scanf("%d",&valor);
	if (valor>=100)
		{
			printf("el valor tiene 3 digitos\n");
		}
	else if (valor>=10)
	    {
	    	printf("el valor tiene 2 digitos\n");
		}
	else 
		{
			printf("el valor tiene un digito\n");
		}
	}while (valor!=0);//ejecutar mientras valor sea diferente de 0
	getch();
	return(0);
}
