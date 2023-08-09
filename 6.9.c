//6.9 Realizar una función que reciba 3 números enteros correspondientes al día, mes y año de una fecha y valide si la misma es correcta. En caso de que la fecha es correcta debe retornar un 1 y si es incorrecta debe retornar un 0. Para la validación usar la función del punto 8 que retorna la cantidad de días de un mes.

#include <stdio.h>
int CantidadDiasDelMes (int, int);
int EsFechaValida (int, int, int);
int Bisiesto (int);

int main()
{
 int d, m, a, bandera=0;
 do {
     if(bandera==1){
         printf("Fecha no valida, ingrese otra fecha");
     }
     bandera=1;
     printf("\nIngrese el dia: ");
     scanf("%d", &d);
     printf("\nIngrese el mes: ");
     scanf("%d", &m);
     printf("\nIngrese el anio: ");
     scanf("%d", &a);
    }while (EsFechaValida(d,m,a)!=1);
 printf("\n\nLa fecha es: %d / %d / %d", d, m, a);
}
///////////////////funciones///////////////////

int EsFechaValida(int d, int m, int a)
{
 int r=0;
 if (a >= 1582)
     if (m >= 1 && m <= 12)
         if (d >= 1 && d <= CantidadDiasDelMes(m, a))
             r=1;
 return r;
}

int CantidadDiasDelMes(int m, int a)
{
 int cdm;
 if (m == 4 || m == 6 || m == 9 || m == 11)
     cdm = 30;
 else
     if (m == 2)
         cdm = 28 + Bisiesto(a);
     else
         cdm = 31;
 return cdm;
}

int Bisiesto(int a)
{
 if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
     return 1;
 else
     return 0;
}