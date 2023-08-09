//5.1.16 Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota promedio (considerar único).

#include <stdio.h>

int main()
{
    int nm=0, i, dni, nota, dni_m;
    for(i=1; i<=3; i++){
        printf("ingrese DNI, y la nota promedio mayor a cero(DNI,nota)\n");
        scanf("%d,%d", &dni,&nota);
        if(nota>nm){
            nm=nota;
            dni_m=dni;
        }
        printf("DNI:%d, NOTA PROMEDIO: %d\n", dni, nota);
    }
    if(nm>0){printf("DNI CON MAYOR NOTA PROMEDIO: %d, NOTA: %d\n", dni_m, nm);}
    else{printf("NO SE INGRESARON NOTAS");}

    return 0;
}