#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int opcion=1;
	float radio,area,base,altura;
	while (opcion!=4)
	{
		system("cls");
		printf("1.-calcular el area de un circulo\n");
		printf("2.-calcular el area de un triangulo\n");
		printf("3.-calcular el area de un rectangulo\n");
		printf("4.-salir\n");
		printf("Cual es la opcion deseada: ");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
			//instrucion si opcion=1
			printf("Vamos a calcular el area de un circulo\n");
			printf("escribe el valor del radio:\n");
			scanf("%f",&radio);
			area=3.141516*pow(radio,2);
			printf("el area del circulo de radio = %.2f es %.2f\n",radio,area);
			system("pause");
			break;
			
			case 2:
			printf("Vamos a calcular el area de un triangulo\n");
			printf("escribe el valor de la base:\n");
			scanf("%f",&base);
			printf("escribe el valor de la altura:\n");
			scanf("%f",&altura);
			area=(base*altura)/2;
			printf("el area del triangulo con base de = %.2f y area de %.2f\n",base,area);
			system("pause");
			break;
			
			case 3:
			printf("Vamos a calcular el area de un rectangulo\n");
			printf("escribe el valor de la base:\n");
			scanf("%f",&base);
			printf("escribe el valor de la altura:\n");
			scanf("%f",&altura);
			area=(base*altura);
			printf("el area del triangulo con base de = %.2f y area de %.2f\n",base,area);
			system("pause");
			break;
			
			case 4:
			printf("selecionaste la opcion 4\n");
			break;
			
			default:
			printf("selecionaste una opcion que no esta definida \n");
			break;
		
		}//cierre switch
	}//cierre de while
	system("pause");
	return(0);
	
}
