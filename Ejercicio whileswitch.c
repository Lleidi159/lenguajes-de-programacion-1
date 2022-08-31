#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num1,num3,num4,potencia,num5,num6;
	float num2,raiz;
	int opcion=1;
	while (opcion!=5)
	{
		printf("1.Determinar si un numero pedido por teclado es par o impar\n");
		printf("2.Calcular la raiz cuadrada del numero pedido por teclado\n");
		printf("3.Elevar el numero pedido por teclado a la potencia indicada por el usuario\n");
		printf("4.Pedir dos numeros e imprimirlos de mayor a menor\n");
		printf("5.Salir\n");
		printf("Cual es la opcion deseada: ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
			printf("Ingeres un numero que desee saber si es par o impar\n");
			scanf("%d",&num1);
			if (num1%2==0)
			{
				printf("%d es par\n", num1);
			}
			else
			{
				printf("%d es impar\n", num1);
			}
			system("pause");
			system("cls");
			break;
			
			case 2:
			printf("Ingeres un numero que desee calcular su raiz cuadrada\n");
			scanf("%f",&num2);
			raiz = sqrt (num2);
			printf("La raiz cuadrada de %.2f es %.2f\n",num2,raiz);
			system("pause");
			system("cls");
			break;	
			
			case 3:
			printf("Ingeres un numero que desee elevar a una potencia\n");
			scanf("%d",&num3);
			printf("Ingrese la potencia a la que desea elevar el numero anterior\n");
			scanf("%d",&num4);
			potencia=pow(num3,num4);
			printf("La potencia resultante de elevar %d a %d es %d\n",num3,num4,potencia);
			system("pause");
			system("cls");
			break;
			
			case 4:
			printf("Ingeres el primer numero\n");
			scanf("%d",&num5);
			printf("Ingrese el segundo numero\n");
			scanf("%d",&num6);
			if (num6<num5)
			{
				printf("El numero mayor es %d y el menor es %d\n",num5,num6);
			}
			else 
			{
				printf("El numero mayor es %d y el menor es %d\n",num6,num5);
			}
			system("pause");
			system("cls");
			break;
			
			case 5:
			printf("selecionaste la opcion 5\n");
			break;
			
			default:
			printf("selecionaste una opcion que no esta definida \n");
			break;
		}
	
	}
	system("pause");
	return(0);
}
	
