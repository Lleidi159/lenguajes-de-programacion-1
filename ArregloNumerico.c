/**************************
Realizo: diego Marquez 
Fecha 21 de septiembre 2022
Manejo de numeros aleatorios mediante la funcion rand y srand
************************/
#include<stdio.h>

int main ()
{
    int numero[5];
    int suma,suma2=0,i;

    numero[0]=200;
    numero[1]=150;
    numero[2]=100;
    numero[3]=-50;
    numero[4]=300;

    suma=numero[0]+numero[1]+numero[2]+numero[3]+numero[4];
    printf("La suma es de %d\n",suma);

    for ( i = 0; i <=4; i++)
    {
        suma2=suma2+numero[i];
    }
    printf("La suma es de %d",suma2);
return 0;
}
