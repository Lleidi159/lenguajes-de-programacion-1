/**************************
Realizo: diego Marquez 
Fecha 20 de septiembre 2022
Manejo de numeros aleatorios mediante la funcion rand y srand
************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int valor,contador;
	int num=-1;
	srand(time(NULL));
	valor=rand()%51;
	while(valor!=num)
	{
	    
		printf("Ingrese un numero abajo de 51\n");
	    scanf("%d",&num);
	    if (valor==num)
	    printf("Ganaste encontraste el numero aleatorio\n");
	    else if  (valor<num)
	    printf("El numero es menor\n");
	    else
	    printf("El numero es mayor\n");
	    contador=contador+1;
	    if(contador>=5){
        printf("Llegaste al maximo numero de intentos %d\n",contador);
       	num=valor;}
	}
	printf("Tus intentos fueron %d\n",contador);
	printf("El numero aleatorio es: %d\n",valor);
	
return 0;
}
