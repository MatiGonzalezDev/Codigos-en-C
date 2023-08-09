//6.8 Realizar una función que, dado un mes y un año, calcule la cantidad de días de dicho mes. El año se utilizará en el caso de que el mes sea febrero ya que los años bisiestos tienen 29 días en lugar de 28. Un año es bisiesto cuando: (el año es divisible por 4 y NO por 100) o (el año es divisible por 400).

#include <stdio.h>
int CantDias (int, int);

int main()
{
 int anio, mes, bandera=0;
 do {
     if (bandera == 1)
         printf("\nMes invalido.\n");
     bandera = 1;
     printf("\nIngrese el mes: ");
     scanf("%d", &mes);
    }while (mes < 1 || mes > 12);
 do {
     if (bandera == 2)
         printf("\nAnio invalido.\n");
     bandera = 2;
     printf("\nIngrese el anio (mayor a 1582): ");
     scanf("%d", &anio);
    }while (anio < 1582);
 printf("\n\nEl mes %d del anio %d tiene %d dias.", mes, anio, CantDias(mes, anio));
}
/////////////////funciones/////////////////
int CantDias(int mes, int anio)
{
 if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
     return 30;
 else
     if (mes == 2)
         if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
             return 29;
         else
             return 28;
     else
         return 31;
}