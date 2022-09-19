/**************************
Realizo: diego Marquez 
Fecha 12 de septiembre 2022
archivo2
************************/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char cadena1[]="aprender a programar\n"; //el char es para declara variables
	char cadena2[]="Requiere esfuerzo\n";
	char cadena3[]="y dedicacion\n";
	FILE* archivo;
	archivo=fopen("almacen2.txt","a");
	fputs(cadena1,archivo);
	fputs(cadena2,archivo);
	fputs(cadena3,archivo);
	fclose(archivo);
	printf("Proceso terminado");
return 0;
}
