//6.2 Se ingresan números enteros comprendidos entre 100 y 2000 (usar función LeerYValidar). Determinar usando la función EstaDentroDelRango:
//a. Cantidad de números ingresados entre 100 y 500
//b. Cantidad de números pares ingresados entre 500 y 1200
//c. Promedio de números ingresados entre 1200 y 2000
//El ingreso de datos finaliza cuando se ingresa un número igual a 99.
//Para realizar este programa se deben realizar las siguientes funciones:
//• EstaDentroDelRango: que reciba 3 enteros correspondientes a un número a validar y los límites superior e inferior del rango. La función debe retornar un 1 si el número a validar se encuentra dentro del rango indicado o un 0 si no lo está.
//• LeerYValidar: que reciba los límites superior e inferior de un rango y retorne un número que se encuentre dentro del mismo. (El ingreso de datos se realiza dentro de la función). Para validar el rango utilizar la función EstaDentroDelRango realizada en el punto anterior.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int LeerYValidar (int, int);
int EstaDentroDelRango (int, int, int);

int main()
{
   int num, cont=0, a=0, b=0, c=0, cont_prom=0, suma=0;

   printf(" Programa muy simple. Ingresar valores enteros en el intervalo [100 ; 2mil]. Ingresar 99 para SALIR.");
   printf("\n\nSe informara lo siguiente:\n");
   printf("\nA)Cantidad de numeros entre 100 y 500");
   printf("\nB)Cantidad de numeros pares entre 500 y 1200");
   printf("\nC)Promedio de numeros ingresados entre 1200 y 2mil\n");
   
   num=LeerYValidar(99, 2000);

   while(num!=99)
   {
      cont=EstaDentroDelRango(num, 100, 500);
      if(cont==1)
         a++;

      cont=EstaDentroDelRango(num, 500, 1200);
      if(cont==1 && num%2==0)
          b++;

      cont=EstaDentroDelRango(num, 1200, 2000);
      if(cont==1)
         cont_prom++;
         c+=num;

      num=LeerYValidar(99, 2000);

   }
   printf("\n\n   -Cantidad de numeros entre 100 y 500: %d", a);
   printf("\n   -Cantidad de numeros PARES entre 500 y 1200: %d", b);
   if(cont_prom>0)
      printf("\n   -Promedio de numeros ingresados entre 1200 y 2mil: %.0f",(float)c/cont_prom);
   else
      printf("\n   -NO se ingresaron numeros entre 1200 y 2mil.");

   printf("\n");
   return 0;
}
int LeerYValidar (int lim_inf, int lim_sup)
{
   int num, flag=0, contador=0;

   do//VALIDO NUM
   {
      if(flag==1)
      {
         printf("\n   -Numero fuera del rango.");
      }
      printf("\n Ingresar un numero entero entre 100 y 2mil: ");
      scanf("%d", &num);
      flag=1;
      contador=EstaDentroDelRango(num, lim_inf, lim_sup);
   }while( !(contador==1) );

   return num;
}
int EstaDentroDelRango (int num, int lim_inf, int lim_sup)
{
   int cont;

   if(num>=lim_inf && num<=lim_sup )
      cont=1;
   else
      cont=0;
      
   return cont;
}