//5.2.5 De cada uno de los alumnos de un curso se ingresa su número de DNI y las notas de los dos exámenes parciales confeccionar, un programa que muestre por cada alumno su condición final con el siguiente mensaje:
//“El alumno con DNI: xxxxxxx, obtuvo las notas: xx y xx [condición final]”
//La condición final se establece según las siguientes reglas:
//• PROMOCIONA: ambas notas > = 7
//• RINDE EXAMEN FINAL: ambas notas > = 4
//• REPROBO LA MATERIA: alguna nota no cumple lo anterior
//El programa finaliza cuando se ingresa un valor negativo como número de DNI. Al finalizar mostrar la nota promedio de alumnos promocionados.

#include <stdio.h>

int main()
{
    int dni, alum=0, notas=0, n1, n2;
    printf("Ingrese el DNI (0 para finalizar ingreso): ");
    scanf("%d", &dni);
    while(dni!=0){
        printf("Ingrese la primera nota: ");
        scanf("%d", &n1);
        printf("Ingrese la segunda nota: ");
        scanf("%d", &n2);
        printf("El alumno con DNI: %d, obtuvo las notas: %d, %d ", dni,n1,n2);
        if(n1>=7 && n2>=7){
            printf("[PROMOCIONA] \n");
            alum++;
            notas+=(n1+n2)/2;
        }
        else{
            if(n1>=4 && n2>=4){
                printf("[RINDE EXAMEN FINAL] \n");
            }
            else{
                printf("[REPROBO LA MATERIA] \n");
            }
        }
        printf("Ingrese el DNI (0 para finalizar ingreso): ");
        scanf("%d", &dni);
    }
    printf("NOTA PROMEDIO DE LOS ALUMNOS PROMOCIONADOS: %d", notas/alum);

    return 0;
}