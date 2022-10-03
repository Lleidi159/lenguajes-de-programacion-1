/* Array de tres dimensiones */
/*     03 de oct 22     */
/*     Curso de C,        */
/*    Diego Marquez        */
 
#include <stdio.h>
 
 
int main() 
{   
int numero;   
  char mes[2][12][20] =  //el primer elemento son renglones el segundo columnas
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
     "diciembre",
     "January", 
     "february", 
     "march",
     "april", 
     "may", 
     "june", 
     "july", 
     "august", 
     "september", 
     "octuber", 
     "novembre",
     "december", 
     };
     printf("Cual mes quieres imprimir: ");
 
  scanf("%d",&numero);
  printf("El mes %d corresponde a: %s y en ingles a: %s\n",numero,mes[0][numero-1],mes[1][numero-1]);
 
  return 0;
}
