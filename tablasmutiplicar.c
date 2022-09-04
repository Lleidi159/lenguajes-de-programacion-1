/* 
Realizo: diego Marquez 
Fecha 29 de agosto 2022
Manejo del ciclo for
ciclofor
*///
#include <stdio.h>
int main()
{
	int cont,i;
	int result;
	for (cont=1;cont<=10;cont++)
	{
		printf("Tabla del 1 al 10 es=%d\n",cont);
		
		for (i=1;i<=10;i++)
		{
			result=i*cont;
			printf("%d x %d = %d\n",cont,i,result);
		}
	
	}
	return(0);
}

