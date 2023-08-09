//6.6 Confeccionar un programa que permita determinar e informar en cuántos de los números enteros comprendidos entre 10001 y 90009 existen más cifras 3 que 4. Debe existir por lo menos, un 4 para que sea considerado el número como válido. Para resolverlo confeccionar una función llamada CIFRAS, que pueda determinar cuántas cifras “n” existen en un número de 5 cifras.

#include <stdio.h>
int Cifras (int, int);
int Compa (int, int);

int main()
{
 int cont=0, cont3, cont4, i;
 for (i=10001; i<= 90009; i++)
    {
     cont3 = Cifras(i, 3);
     cont4 = Cifras(i, 4);
     if (cont4>0 && cont3>cont4 )
         cont++;
    }
 printf("En %d numeros existen mas cifras 3 que 4", cont);
}
////////////funciones/////////////////////////
int Cifras (int i, int n)
{
 int r=0, dm, m, cent, dec, unid, aux1, aux2, aux3;
 dm = i / 10000;
 aux1 = i % 10000;
 m = aux1 / 1000;
 aux2 = aux1 % 1000;
 cent = aux2 / 100;
 aux3 = aux2 % 100;
 dec = aux3 / 10;
 unid = aux3 % 10;

 r+= Compa(dm, n);
 r+= Compa(m, n);
 r+= Compa(cent, n);
 r+= Compa(dec, n);
 r+= Compa(unid, n);
 
 return r;
}

int Compa(int cif, int n)
{
 if (cif == n)
     return 1;
 else
     return 0;
}