/**************************
Realizo: Diego Marquez 
Fecha 04 de oct 2022
************************/
#include<stdio.h>
#include "Areas.h"
int main()
{
	float resultado,B,b,altura;
	int opcion=0,radio,perimetro,apotema;
	
	while(opcion!=5)
	{
		printf("Calculadora.\n\n");
        printf("Que operacion quieres realizar?\n");
        printf("1. Area de un circulo\n");
        printf("2. Area de un pentagono\n");
        printf("3. Area de un trapecio\n");
        printf("4. Area de un rectangulo\n");
        printf("5. Salir\n\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        
		switch(opcion)
	    {
	        case 1:
	    	    printf("Ingrese el valor del radio: ");
                scanf("%d", &radio);
                resultado = circulo (radio);
                printf("El resultado de la operacion es: %f \n\n", resultado);
            break;
            case 2:
	    	    printf("Ingrese el valor del perimetro: ");
                scanf("%d", &perimetro);
                printf("Ingrese el valor del apotema: ");
                scanf("%d", &apotema);
                resultado = pentagono (perimetro,apotema);
                printf("El resultado de la operacion es: %f \n\n", resultado);
            break;
            case 3:
	    	    printf("Ingrese el valor de la base mayor: ");
                scanf("%f", &B);
                printf("Ingrese el valor de la base menor: ");
                scanf("%f", &b);
                printf("Ingrese el valor de la altura: ");
                scanf("%f", &altura);
                resultado = trapacio (B,b,altura);
                printf("El resultado de la operacion es: %f \n\n", resultado);
            break;
            case 4:
	    	    printf("Ingrese el valor de la base: ");
                scanf("%f", &B);
                printf("Ingrese el valor de la altura: ");
                scanf("%f", &altura);
                resultado = rectangulo (B,altura);
                printf("El resultado de la operacion es: %f \n\n", resultado);
            break;
	    }
	}
return 0;
}
