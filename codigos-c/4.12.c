//4.12 Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado. Calcular su sueldo tomando en cuenta que recibe un premio de $500 si trabajo más de 50 horas y, además, si trabajó más de 150 horas se le otorgan $1000 adicionales.

#include <stdio.h>

int main()
{
    int ht, vh;
    printf("Ingrese la cantidad de horas trabajadas mayor a cero\n");
    scanf("%d", &ht);
    printf("Ingrese el valor por hora trabajada mayor a cero\n");
    scanf("%d", &vh);
    if(ht<=0 || vh<=0){printf("No es posible realizar la operacion, algun valor es nulo");}
    else{
        if(ht>150){printf("Sueldo: %d", (ht*vh)+500+1000);}
        else{
            if(ht>50){printf("Sueldo: %d", (ht*vh)+500);}
            else{printf("Sueldo: %d", ht*vh);}
        }
    }
    
    return 0;
}