/**************************
Realizo: diego Marquez 
Fecha 21 de septiembre 2022
Calcular Pi
************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i;
	int limite = 10000000;//Cantidad maxima de n enteros positivos.
	double suma = 0;//guarda la suma de los enteros positivos 
	float pi=0;//guarda el valor de final de pi
	for(i=1;i<=limite; i++)
	{
		suma=suma+1/(pow(i,2));
	}
	pi=sqrt(suma*6);
	printf("el valor de pi es: %f\n",pi);
return 0;
}
