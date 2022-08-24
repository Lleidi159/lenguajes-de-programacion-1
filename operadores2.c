/********************************************************
Realizo: Diego Marquez
Fecha 23 ago del 2022
Manejo de operadores l+ogicos y de relacion operadores2.c
*********************************************************/
#include<stdio.h>

int main()
{
	int A=0;
	int B=0;
	
	printf("Tabla de verdad AND &&\n");
	printf("A=%d && B==%d = %d\n",A,B,A&&B);
	printf("A=%d && B==%d = %d\n",A,!B,A&&!B);
	printf("A=%d && B==%d = %d\n",!A,B,!A&&B);
	printf("A=%d && B==%d = %d\n\n",!A,!B,!A&&!B);
	
	printf("Tabla de verdad OR ||\n");
	printf("A=%d || B==%d = %d\n",A,B,A||B);
	printf("A=%d || B==%d = %d\n",A,!B,A||!B);
	printf("A=%d || B==%d = %d\n",!A,B,!A||B);
	printf("A=%d || B==%d = %d\n",!A,!B,!A||!B);
	
	return(0);
}
