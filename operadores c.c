/********************************************************
Realizo: Diego Marquez 
Fecha 23 ago del 2022
Manejo de operadores l+ogicos y de relacion operadores.c
*********************************************************/
#include<stdio.h>

int main()
{
	//declaracion de variable 
	int A=5;
	int B=7;
	//operaciones o codigo
	printf("(A==B)&&(A<B) el resultado es; %d\n",(A==B)&&(A<B));
	printf("(A==5)||(A>7) el resultado es; %d\n",(A==5)||(A>7));
	printf("!(A==5) el resultado es; %d",!(A==5));
	
	return(0);
}
