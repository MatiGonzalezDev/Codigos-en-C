//2.2 Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio. 

#include <stdio.h>

int main()
{
    int n1, n2;
    float prom;
    printf("Ingresar las notas de dos evaluaciones de un alumno para determinar la nota promedio.\n\n");
    printf("Ingrese la nota mayor a cero\n");
    scanf("%d", &n1);
    printf("Ingrese la segunda nota mayor a cero\n");
    scanf("%d", &n2);
    prom=(float)(n1+n2)/2;
    printf("Promedio: %.2f", prom);

    return 0;
}