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
	FILE*archivo;
	archivo=fopen("datos.txt","a");
	printf("Escribe el Nombre Completo a almacenar: ");
	scanf("%[^\n]",nombre); //captura todo lo que encuentre hasta detectaren entre
	fflush(stdin);
	fputs(nombre,archivo);
	fputs(" ",archivo);
	printf("que edad tiene: ");
	scanf("%s",edad);
	fflush(stdin);
	fputs(edad,archivo);
	fputs(" ",archivo);
	printf("Cual es la estatura: ");
	scanf("%s",estatura);
	fflush(stdin);
	fputs(estatura,archivo);
	fputs("\n",archivo);
	fclose(archivo);
return 0;
}
