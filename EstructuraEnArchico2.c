/**************************
Realizo: diego Marquez 
Fecha 13 de septiembre 2022
escritura en archivo
************************/
#include<stdio.h>
#include<stdlib.h>

//captura de cadena de caracteres que se se almacenaran en archivo de texto
int main ()
{
	char nombre[40];
	char edad[3];
	char estatura[4];
	FILE* archivo;
	archivo=fopen("datos1.csv","a");
	printf("Escribe el Nombre Completo a almacenar: ");
	gets(nombre); //el gets es para stings pero sin tanto texto
	fputs(nombre,archivo);
	fputs(",",archivo);
	printf("que edad tiene: ");
	gets(edad);
	fputs(edad,archivo);
	fputs(",",archivo);
	printf("Cual es la estatura: ");
	gets(estatura);
	fputs(estatura,archivo);
	fputs("\n",archivo);
	fclose(archivo);
return 0;
}
