//7.1.5 Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día. Por cada pedido se recibe:
// Código de producto (de 1 a 10)
// Cantidad de unidades solicitadas
//Se puede recibir más de un pedido por producto.
//La carga finaliza cuando se ingresa un producto con código igual a cero.
//Al finalizar se debe emitir un listado con código y cantidad de unidades solicitadas de cada producto.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
   int vec[10]={0}, codigo, flag=0, aux, cantidad, i;

   printf("\n\t Programa simple. Registra las cantidad solicitadas de 10 productos durante el dia.");
   printf("\n\t -------- ------  -------- --- -------- ----------- -- -- --------- ------- -- --- ");
   printf("\n\n -Los codigos de los productos corresponden al intervalo [1-10]");
   printf("\n -Ingresar 0 (cero) para finalizar el ingreso de cantidades.\n");
   do
   {
      if(flag==1)
         printf("\n CODIGO NO VALIDO. Reingresar codigo.");
      printf("\n Ingresar codigo del producto: ");
      scanf("%d", &codigo);
      flag=1;
   }while( !(codigo>=0 && codigo<=10) );
   flag=0;

   while(codigo!=0)
   {
      aux=codigo;
      aux=aux-1;
      printf(" Ingresar la cantidad del producto (%d): ", codigo);
      scanf("%d", &cantidad);
      vec[aux]=vec[aux]+cantidad;
      do
      {
         if(flag==1)
            printf("\n CODIGO NO VALIDO. Reingresar codigo.");
         printf("\n Ingresar codigo del producto: ");
         scanf("%d", &codigo);
         flag=1;
      }while( !(codigo>=0 && codigo<=10) );
      flag=0;
   }

   printf("\n\n\t\t Listado de las cantidad solicitadas.");
   printf("\n\t\t ------- -- --- -------- ----------- \n");

   for(i=1;i<=10;i++)
   {
      printf("\n -Producto (%d). Cantidad: %d", i, vec[i-1]);
   }
   printf("\n");
   return 0;
}