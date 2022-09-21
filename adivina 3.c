/**************************
Realizo: diego Marquez 
Fecha 21 de septiembre 2022
Manejo de numeros aleatorios mediante la funcion rand y srand
************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	char jugar[]="SI";
	char jugar1[]="SI";
	int x=0;
	while(x==0)
	{
		int adivina=- 1;
		int contador=0;
		srand(time(NULL));//El sistema pone a trabajar los numeros aleatorios
		int Noculto=rand()%51;//Primer disparo del sistema
		printf("Quieres volver a jugar SI/NO:");
		scanf("%s",jugar1);
		x=strcmp(jugar,jugar1);
	}
	
return 0;
}
