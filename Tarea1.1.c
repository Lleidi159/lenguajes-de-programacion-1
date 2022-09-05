#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int x, sum=0, i, j, par=0, impar=0, primo=1;
	int opcion=1;
	while (opcion!=5)
	{
		printf("1.Realiza la suma de todos los numeros del 1 al 100\n");
		printf("2.Realiza la suma de todos los numero pares existentes emtre el 1 y el 100\n");
		printf("3.Realiza la suma de todos los numero nones existentes entre el 1 y el 100\n");
		printf("4.Indentifica los numeros primos existentes entre 1 y 100\n");
		printf("5.Salir\n");
		printf("Cual es la opcion deseada: ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
		    for (x=1;x<=100;x++)
			{
             sum=sum+x; 
            }
            printf("La suma de todos los numeros del 1 al 100 es: %d\n",sum);
			system("pause");
			system("cls");
			break;	
			
			case 2:
		    for (i=1;i<=100;i++)
		    {
		    	if(i % 2 == 0)
		        par=par+i;
			}
			printf("La suma de los pares es %d\n",par);
			system("pause");
			system("cls");
			break;
			
			case 3:
		    for (j=1;j<=100;j++)
		    {
		    	if(j % 1 == 0)
		        impar=impar+j;
			}
			printf("La suma de los pares es %d\n",impar);
			system("pause");
			system("cls");
			break;	
			
			case 4:
		    for (j=1;j<=100;j++)
		    {
		    	if(100 % j == 0)
		    	
		    	
		        primo+j;
			}
			printf("Los numeros primos del 1 al 100 son\n",primo);
			system("pause");
			system("cls");
			break;
			
			case 5:
			printf("selecionaste la opcion 5 de salir\n");
			break;
			
			default:
			printf("selecionaste una opcion que no esta definida \n");
			break;
		}
	
	}
	system("pause");
	return(0);
}
