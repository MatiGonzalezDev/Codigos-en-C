//5.1.14 Se ingresan datos de los empleados de una empresa. Por cada empleado se ingresa:
//• Legajo (entero entre 1000 y 5000)
//• Sueldo básico (float mayor a 1000)
//• Antigüedad en años (mayor o igual a 0)
//• Sexo (‘M' o 'F')
//• Categoría (entero entre 1 a 5)
//Por cada empleado ingresado se debe calcular el sueldo final a abonar sabiendo que:
//• Las Categorías 2 y 3 tienen $500 de bonificación.
//• La Categoría 4 tiene 10% de bonificación.
//• La Categoría 5 tiene 30% de bonificación.
//• Si la antigüedad es mayor a 10 años recibe una bonificación del 10% adicional.
//Todos los datos ingresados deben ser validados. El ingreso finaliza con un legajo igual a cero.
//Informar:
//• El sueldo a abonar a cada empleado.
//• Cantidad de empleados de más de 10 años de antigüedad.
//• El mayor sueldo y el legajo del empleado que cobra dicho sueldo.
//• Cantidad de hombres y de mujeres.

#include <stdio.h>
#include <ctype.h>

int main()
{
    int legajo;

    do{
        printf("Ingrese el numero de legajo (entre 1000 y 5000, 0 para finalizar): ");
        scanf("%d", &legajo);
    }while(legajo != 0 && legajo<1000 || legajo>5000);
    
    int antg, catg, antg_10=0, leg_sal_may, acum_f=0, acum_m=0;
    float sal_b, salario, sal_may;
    char sex;
    
    int acum=0;
    while(legajo != 0){
         do{
             printf("Ingrese el salario basico (mayor a $1000.00): ");
             scanf("%f", &sal_b);
         }while(sal_b < 1000);
         do{
             printf("Ingrese la antiguedad (mayor o igual a 0): ");
             scanf("%d", &antg);
         }while(antg < 0);
         do{
             printf("Ingrese el sexo (M pa masculino, F para femenino): ");
             scanf("%c", &sex);
             sex=toupper(sex);
         }while(sex != 'M' && sex != 'F');
         do{
             printf("Ingrese la categoria (del 1 al 5): ");
             scanf("%d", &catg);
         }while(catg<1 || catg>5);
         salario=sal_b;
         
         if(catg==2 || catg==3){
             salario+=500;
         }
         if(catg==4){
             salario+=sal_b*0.1;
         }
         if(catg==5){
             salario+=sal_b*0.3;
         }
         if(antg>10){
             salario+=sal_b*0.1;
             antg_10++;
         }
         if(salario>sal_may){
             sal_may=salario;
             leg_sal_may=legajo;
         }
         if(sex='F'){
             acum_f++;
         }
         else{
             acum_m++;
         }
         printf("LEGAJO %d  SALARIO $ %.2f\n", legajo,salario);
         
         
         do{
             printf("Ingrese el numero de legajo(entre 1000 y 5000, 0 para finalizar): ");
             scanf("%d", &legajo);
         }while(legajo != 0 && legajo<1000 || legajo>5000);
    }
    printf("EMPLEADOS CON MAS DE 10 ANIOS DE ANTIGUEDAD %d\n", antg_10);
    printf("SALARIO MAYOR DE LOS EMPLEADOS %.2f  LEGAJO %d\n", sal_may, leg_sal_may);
    printf("CANTIDAD DE HOMBRES %d\n", acum_m);
    printf("CANTIDAD DE MUJERES %d\n", acum_f);

    return 0;
}