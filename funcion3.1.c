/*Programa para calcular por medio de una funcion la suma de todos los numeros entre 0 y 100
regresando la suma en la variable acumulada para imprimirla despues del main*/

int sum ()
{
	int x;
	int sum=0;
	for(x=0;x<=100; x++)
	{
		sum=sum+x;
	}
	return sum;
}

int main ()
{
	int resultado;
	resultado=sum();
	printf("La suma de los numero del 0 al 100 es de %d\n",resultado);
return(0);
}
