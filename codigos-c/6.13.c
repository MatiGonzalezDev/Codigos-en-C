//6.13 Realizar una función que permita restar n días a una fecha válida mostrando la fecha resultante. Si la fecha recibida no es válida informarlo con un mensaje (validar utilizando la función del punto 9).

#include <stdio.h>
int CantidadDiasDelMes (int, int);
int EsFechaValida (int, int, int);
int Bisiesto (int);

int main()
{
 int d, m, a, bandera=0, df, mf, af, n;
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
    printf("\nIngrese la cantidad de dias (mayores a cero) que deses sumar: ");
    scanf("%d", &n);
df=d-n;
mf=m;
af=a;
while(df<1){
    mf--;
    if(mf<1){
        mf=12;
        af--;
    }
    df+=CantidadDiasDelMes(mf,af);
}
printf("\n\nLa fecha %d/ %d/ %d menos %d dias es %d/ %d/ %d", d,m,a,n,df,mf,af);
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