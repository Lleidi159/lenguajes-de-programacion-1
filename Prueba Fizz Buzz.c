/**************************
Realizo: diego Marquez 
Fecha 13 de septiembre 2022
escritura en archivo
************************/
#include <stdio.h>
int main()
{
    int i;
    int eleccion;

    printf("-----Ejercicio FizzBuzz-----\n");
    printf("* Hasta que numero deseas ejecutar FizzBuzz?   ");
    scanf("%d",&eleccion);

    for (i = 1; i <= eleccion; i++)
    {
      if (i % 3 == 0 && i % 5 == 0) {
        printf("FizzBuzz\n");
      }
      else if (i % 3 == 0) {
        printf("Fizz\n");
      }
      else if (i % 5 == 0) {
        printf("Buzz\n");
      }
      else{
        printf("%d\n",i);
      }
    }
return 0;
}
