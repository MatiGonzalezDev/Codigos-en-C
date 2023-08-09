//6.14 Realizar un programa que ingrese la fecha actual y la fecha de nacimiento de una persona y calcule su edad. Para validar las fechas utilizar la función del punto 9. Para el cálculo realizar una función que reciba las dos fechas y retorne la edad de la persona.

#include <stdio.h>
int CantidadDiasDelMes (int, int);
int EsFechaValida (int, int, int);
int Bisiesto (int);
int CalcularEdad(int, int, int, int, int, int);

int main()
{
 int d, m, a, bandera=0, dn, mn, an;
 do {
     if(bandera==1){
         printf("Fecha no valida, ingrese otra fecha");
     }
     bandera=1;
     printf("\nINGRESE FECHA ACTUAL");
     printf("\nIngrese el dia: ");
     scanf("%d", &d);
     printf("\nIngrese el mes: ");
     scanf("%d", &m);
     printf("\nIngrese el anio: ");
     scanf("%d", &a);
    }while (EsFechaValida(d,m,a)!=1);
    bandera=0;
    do {
     if(bandera==1){
         printf("Fecha no valida, ingrese otra fecha");
     }
     bandera=1;
     printf("\nINGRESE FECHA DE NACIMIENTO");
     printf("\nIngrese el dia: ");
     scanf("%d", &dn);
     printf("\nIngrese el mes: ");
     scanf("%d", &mn);
     printf("\nIngrese el anio: ");
     scanf("%d", &an);
    }while (EsFechaValida(dn,mn,an)!=1);
    if(a>an){
        printf("\nLa edad es %d ", CalcularEdad(d,m,a,dn,mn,an));
    }
    else{
        printf("\nNo es posible calcular la edad");
    }
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
int CalcularEdad(int d,int m,int a,int dn,int mn,int an)
{
    int edad;
    edad=a-an;
    if(m==mn){
        if(d<dn)edad--;
    }
    else{
        if(m<mn)edad--;
    }
    return edad;
}