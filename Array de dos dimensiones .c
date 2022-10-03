/*                           */
/*  Array de dos dimensiones */
/*                           */
/*     Curso de C,           */
/*    Lino Carrillo          */
 
#include <stdio.h>
 
 
int main() 
{   
    int numero;   
    char mes[12][20] =  //el primer elemento son renglones el segundo columnas
     {
     "enero", 
     "febrero", 
     "marzo",
     "abril", 
     "mayo", 
     "junio", 
     "julio", 
     "agosto", 
     "septiembre", 
     "octubre", 
     "noviembre",
     "diciembre" 
     };
     printf("Cual mes quieres imprimir: ");
 
  scanf("%d",&numero);
  printf("El mes %d, corresponde a: %c",numero,mes[numero-1][3]);
  //puts(notas[2][7]);
 
  return 0;
}
