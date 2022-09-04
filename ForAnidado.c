/**************************
Realizo: diego Marquez 
Fecha 29 de agosto 2022
Manejo del ciclo for anidado
ciclofor
************************/
#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		printf("el contador es = %d\n",i);
		for(j=1;j<=10;j++)
		{
			printf("El contador del segundo ciclo es= %d\n ",j);
		}
		
	}
return(0);
}
