//6.1 Realizar un programa que al ingresar solicite el ingreso de dos números enteros y luego muestre por pantalla el siguiente menú (las xx de los números deben ser reemplazadas con los valores correspondientes):
//Menú de Opciones
//---- -- --------
//Numero 1: xx Numero 2: xx
//1) Sumar
//2) Restar
//3) Multiplicar
//4) Dividir
//5) Ingresar Nuevos Números
//6) Salir
//Ingrese su opción:
//Al ingresar el número de la opción del 1 al 4, se realiza la operación y muestra el resultado hasta que se presione una tecla. Luego vuelve a mostrar el menú para poder realizar otra operación con los mismos números. La opción 5 pide el ingreso de dos nuevos números de trabajo mientras que la opción 6 sale y cierra el programa. El ingreso de la opción debe estar validado y en caso de ingresarse un número no válido debe solicitarlo nuevamente. Usar una función para mostrar el menú y retornar el valor elegido. 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int cartel(int,int);


int main ()
{
  int n1, n2, r, caso;
     
     printf("\n   -Ingresar 2 valores enteros.\n");
     printf("\n   -Valor del primer numero: ");
     scanf("%d", &n1);
     printf("\n   -Valor del segundo numero: ");
     scanf("%d", &n2);
     
     caso=cartel(n1,n2);
     
     while(caso != 6){
         if(caso==1){
             printf("\nResultado: %d\n", r=n1+n2);
         }
         if(caso==2){
             printf("\nResultado: %d\n", r=n1-n2);
         }
         if(caso==3){
             printf("\nResultado: %d\n", r=n1*n2);
             
         }
         if(caso==4){
             printf("\nResultado: %d\n", r=n1/n2);
         }
         if(caso==5){
             printf("\n   -Valor del primer numero: ");
             scanf("%d", &n1);
             printf("\n   -Valor del segundo numero: ");
             scanf("%d", &n2);
             
         }
         caso=cartel(n1,n2);
     }
     printf("\nFIN DEL PROGRAMA");

  return 0;
  }
  
  int cartel(int x, int y)
  {
      int caso;
      printf("\nMenú de Opciones\n---- -- -------- \nNumero 1: %d Numero 2: %d \n1) Sumar \n2) Restar \n3) Multiplicar \n4) Dividir \n5) Ingresar Nuevos Números \n6) Salir \n Ingrese su opción ", x,y);
      do{
          scanf("%d", &caso);
          if(caso<0){
              printf("\nError, dato no valido\n");
          }
      }while(x < 0 && y < 0);
      return caso;
  }