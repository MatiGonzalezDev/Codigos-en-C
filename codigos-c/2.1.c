//2.1 Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado. Determinar el sueldo.

#include <stdio.h>

int main()
{
    int HsTbj, ValHs;
    printf("Se ingresan la cantidad de horas trabajadas y el valor por hora de un empleado para determinar el sueldo.\n\n");
    printf("Ingrese la cantidad de horas trabajadas mayor a cero.\n");
    scanf("%d", &HsTbj);
    printf("Ingrese el valor por hora trabajada mayor a cero.\n");
    scanf("%d", &ValHs);
    printf("Sueldo: %d", HsTbj*ValHs);

    return 0;
}