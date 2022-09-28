/**************************
Realizo: diego Marquez 
Fecha 26 de septiembre 2022
Invertir una palabra Plaidromo
************************/
#include <stdio.h>
#include <string.h>
int main()
{
	char palabra[100],palabra1[100],palabra2[100];
	int i,r,cont=0;
	printf("Introduzca palabra\n");
	gets(palabra);
	//Elimina los espacios en blanco
	for(i=0;i<=strlen(palabra);i++)
	{
		if(palabra[i]!=' ')
		{
			palabra1[cont]=palabra[i];
			cont++;
		}
	}
	puts(palabra1);
	//invertir la palabra
	for(i=strlen(palabra1)-1;i>=0;i--)  //se lee y se voltal todo el texto (strlen es el tamaño de la oracion)
	{
		putchar(palabra1[i]);	
	}
	//compara oraciones
	if (palabra1==palabra){
		printf ("\nLa palabra es un palindromo");
	}
	else {
		printf ("\nLa palabra es un palindromo");
	}
	
return 0;
}
