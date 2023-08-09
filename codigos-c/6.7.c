//6.7 Confeccionar un programa que permita ingresar diversas ternas de valores enteros mayores que 0 y menores que 99. Finalizar el ingreso cuando se informen 3 valores iguales a 96, 97 y 98. Determinar e informar para cada terna, el mayor y el menor de los valores. Confeccionar y utilizar una función con parámetros llamada MayorMenor, que permita calcular el menor o el mayor valor de la terna según un parámetro de configuración.

#include <stdio.h>
int MayorMenor(int,int,int,int);
int LeerYValidar(int);

int main()
{
 int n1, n2, n3;
 printf("Ingrese tres valores de una terna (96, 97 y 98 para finalizar.)\n");
 n1 = LeerYValidar(1);
 n2 = LeerYValidar(2);
 n3 = LeerYValidar(3);
 while (n1 != 96 && n2 != 97 && n3 != 98)
    {
     printf("\nEl mayor valor de la terna es: %d", MayorMenor(n1,n2,n3,1));
     printf("\nEl menor valor de la terna es: %d\n", MayorMenor(n1,n2,n3,0));
     n1 = LeerYValidar(1);
     n2 = LeerYValidar(2);
     n3 = LeerYValidar(3);
    }
}
///////////////////funciones/////////////////////
int LeerYValidar(int v)
{
 int n, ban=0;
 do {
     if (ban == 1)
         printf("\nIngreso incorrecto\n");
     ban = 1;
     printf("\nIngrese el valor %d de la terna(entre 1 y 99): ", v);
     scanf("%d", &n);
    }while (n < 0 || n > 99);
 return n;
}

int MayorMenor(int n1, int n2, int n3, int par)
{
 int val;
 if (par == 1)
     if (n1 > n2)
         if (n1 >= n3)
             val = n1;
         else
             val = n3;
     else
         if (n2 >= n3)
             val = n2;
         else
             val = n3;
 else
     if (n1 < n2)
         if (n1 <= n3)
             val = n1;
         else
             val = n3;
     else
         if (n2 <= n3)
             val = n2;
         else
             val = n3;
 return val;
}