/**************************
Realizo: diego Marquez 
Fecha 12 de septiembre 2022
archivo1
************************/
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	FILE* archivo;
	archivo = fopen("almacen1.txt","r");
	fputs("Ya estas programando y Trabajando con archivos\n",archivo);
	fputs("Requiere un gran esfuerzo y dedicacion\n",archivo);
	fputs("Pero el resultado, vale la pena\n",archivo);
	fclose(archivo);
	printf("Proceso terminado correctamente");
return 0;
}


