/**************************
Realizo: diego Marquez 
Fecha 21 de septiembre 2022
Invertir una palabra 2
************************/
#include <stdio.h>
#include <string.h>

int main()
{
	char buffer [100];
	int i;
	printf("Introduzca palabra\n");
	gets(buffer);
	for(i=strlen(buffer)-1;i>=0;i--)  //se lee y se voltal todo el texto
	    putchar(buffer[i]);
return 0;
}
