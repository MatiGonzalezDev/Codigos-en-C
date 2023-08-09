//5.1.7 Dadas 20 notas y legajos de alumnos de un curso. Determinar:
//a. Cantidad de alumnos aplazados.
//b. Cuando la nota sea mayor a 7, mostrar el mensaje: “El alumno con legajo xxx ha Promocionado”.

#include <stdio.h>

int main()
{
    int i, n, l, acum=0;
    for(i=1; i<=20; i++){
        printf("Ingrese la nota mayor a cero y el legajo mayor a cero (nota,legajo)\n");
        scanf("%d,%d", &n,&l);
        if(n<4){acum++;}
        if(n>7){printf("El alumno con legajo %d ha promocionado\n", l);}
        }
        printf("El total de alumnos aplazados es %d\n", acum);

    return 0;
}