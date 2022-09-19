/**************************
Realizo: diego Marquez 
Fecha 19 de septiembre 2022
Serie de fibonacci
************************/
#include <stdio.h>

int main()
{
	int i,valor,num;
	int a=1,b=1,c;
	printf("Ingrese cuantas veces desea ejecutar secuencia\n");
	scanf("%d",&valor);
	printf("%d\n",a);
	printf("%d\n",b);
	
	for (i=1; i<=valor-2; i++)
	{
		c=b+a;
		printf("%d\n",c);
		a=b;
		b=c;
	}
return 0;
}
