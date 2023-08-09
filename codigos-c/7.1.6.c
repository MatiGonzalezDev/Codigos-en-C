//7.1.6 Se ingresan DNI, código de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como máximo la empresa tiene 100 empleados. Se desea:
//a. Cargar los datos de los empleados mediante la función CargaEmpleados. La carga finaliza con un empleado con DNI 99.
//b. Generar un vector con la cantidad de empleados en cada sector mediante la función CuentaPorSector y mostrarlo en forma de listado.
//c. Determinar el importe total a pagar de sueldos mediante la función TotalAPagar.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int CargaEmpleados(int [], int [], float [], int);
void CuentaPorSector(int [], int);
void TotalAPagar (float [], int);

int main()
{
   int dni[100]={0}, cod_sector[100]={0}, num;
   float sueldo[100];//Usare la variable num para conocer la cantd de datos cargados.

   num=CargaEmpleados(dni, cod_sector, sueldo, 100);
   CuentaPorSector(cod_sector, num);
   TotalAPagar(sueldo, num);


   printf("\n");
   return 0;
}
//FUNCION PARA CARGAR DATOS
int CargaEmpleados(int dni[], int cod_sector[], float sueldo[], int num)
{

   int i=0, flag=0;
   printf("\tEl siguiente programa permite ingresar DNI, sector y sueldo del empleado.");
   printf("\n\n   Para salir del programa ingresar en DNI el valor 99.");
   printf("\n   50 MIL es el monto minimo permitido para ingresar en el sueldo.\n");
   printf("\n------------------------------------------------------------------------ ");
   printf("\nRegistro numero %d.", i+1);

   do
   {
      if(flag==1)
         printf("\nDNI NO VALIDO. Ingresar nuevamente...\n");
      printf("\n\n -Ingresar DNI: ");
      scanf("%d", &dni[i]);
      flag=1;
   }while( !(dni[i]>0) );
   flag=0;
//INICIO WHILE
   while(dni[i]!=99)
   {
      do
      {
         if(flag==1)
            printf("\n SECTOR NO VALIDO. Ingresar nuevamente...\n");
         printf(" -Ingresar Sector: ");
         scanf("%d", &cod_sector[i]);
         flag=1;
      }while( !(cod_sector[i]>=1 && cod_sector[i]<=5));
      flag=0;

      do
      {
         if(flag==1)
            printf("\n Monto NO VALIDO. Ingresar nuevamente...\n");
         printf(" -Ingresar Sueldo: $");
         scanf("%f", &sueldo[i]);
         flag=1;
      }while( !(sueldo[i]>=50000));
      flag=0;
      i++;//SIGUIENTE INGRESO O SALIR.
      printf("\n------------------------------------------------------------------------ ");
      printf("\nRegistro numero %d.\n", i+1);
      do
      {
         if(flag==1)
            printf("\nDNI NO VALIDO. Ingresar nuevamente...");
         printf("\n -Ingresar DNI: ");
         scanf("%d", &dni[i]);
         flag=1;
      }while( !(dni[i]>0) );
      flag=0;

   }//FIN WHILE
   return i;//Devuelvo i que representa la cantd de datos cargados.
}//FIN FUNCION
//FUNCION PARA CONTAR EMPLEADOS POR SECTOR.
void CuentaPorSector(int cod_sector[], int num)
{
   int i, cantd_por_sector[5]={0};

   for(i=0; i<=99; i++)
   {
      if(cod_sector[i]==1)
         cantd_por_sector[0]++;
      if(cod_sector[i]==2)
         cantd_por_sector[1]++;
      if(cod_sector[i]==3)
         cantd_por_sector[2]++;
      if(cod_sector[i]==4)
         cantd_por_sector[3]++;
      if(cod_sector[i]==5)
         cantd_por_sector[4]++;
   }//FIN FOR

   printf("\n\n\t\t Cantidad de empleados por sectores.");
   printf("\n\n   -Sector 1: %d", cantd_por_sector[0]);
   printf("\n   -Sector 2: %d", cantd_por_sector[1]);
   printf("\n   -Sector 3: %d", cantd_por_sector[2]);
   printf("\n   -Sector 4: %d", cantd_por_sector[3]);
   printf("\n   -Sector 5: %d", cantd_por_sector[4]);
}
//FUNCION QUE CALCULA MONTO TOTAL NECESARIO PARA ABONAR TODOS LOS SUELDOS.
void TotalAPagar (float sueldo[], int num)
{
   int i;
   float total=0;

   for(i=0; i<=num; i++)
   {
      if(sueldo[i]!=0)
         total+=sueldo[i];
   }

   printf("\n\n   -Importe Total a pagar de todos los sueldos: $%.2f", total);
}