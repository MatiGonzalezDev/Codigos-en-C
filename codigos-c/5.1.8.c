//5.1.8 Dadas las edades y estaturas de 45 alumnos de un curso. Determinar:
//a. Edad promedio.
//b. Estatura promedio.
//c. Cantidad de alumnos mayores de 10 años.
//d. Cantidad de alumnos que miden menos de 1.40 cm.

#include <stdio.h>

int main()
{
    int i, edad, acum=0, cont=0, cont2=0;
    float estatura, acum2=0;
    for(i=1; i<=4; i++){
        printf("Ingrese la edad y la estatura del alumno(edad,estatura)\n");
        scanf("%d,%f", &edad,&estatura);
        acum+=edad;
        acum2+=estatura;
        if(edad>10){cont++;}
        if(estatura<1.40){cont2++;}
        }
        printf("EDAD PROMEDIO: %d \n", acum/4);
        printf("ESTATURA PROMEDIO: %.2f \n", (float)acum2/4);
        printf("ALUMNOS MAYORES DE 10 ANIOS: %d \n", cont);
        printf("ALUMNOS QUE MIDEN MENOS DE 1.40: %d \n", cont2);

    return 0;
}