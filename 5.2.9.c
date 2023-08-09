//5.2.9 Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores (‘S’ o ‘N’). Además, se conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
//• Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
//• Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
//• Si el empleado posee estudios superiores: aumento del 5%
//Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se termina la carga cuando no se deseen ingresar más empleados.
//Determinar:
//a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
//b. Sueldo nuevo promedio de la empresa.

#include <stdio.h>

int main()
{
    int num, sal_b, ant, hij, sal, cont=0, sum=0;
    char est_sup, emp;
    do{
        printf("Ingrese numero de empleado (0 para finalizar): ");
        scanf("%d", &num);
    }while(num<0);
    while(num!=0){
        do{
            printf("Ingrese salario basico: ");
            scanf("%d", &sal_b);
        }while(sal_b<=0);
        do{
            printf("Ingrese antiguedad: ");
            scanf("%d", &ant);
        }while(ant<0);
        do{
            printf("Ingrese la cantidad de hijos: ");
            fflush(stdin);
            scanf("%d", &hij);
        }while(hij<0);
        do{
            printf("\nIngrese si posee estudios superiores(S si pose, N si no posee) ");
            scanf("%c", &est_sup);
        }while(est_sup!='S' && est_sup!='N' && est_sup!='s' && est_sup!='n');
        sal=sal_b;
        
        if(ant>10){
            sal+=sal_b*0.1;
        }
        
        if(hij>2){
            sal+=sal_b*0.1;
        }
        else{
            if(hij==1){
                sal+=sal_b*0.05;
            }
        }
        if(est_sup == 'S'||est_sup == 's'){
            sal+=sal_b*0.05;
        }
        cont++;
        sum+=sal;
        
        printf("EMPLEADO N°%d\n", num);
        printf("SUELDO BASICO $%d\n", sal_b);
        printf("SUELDO FINAL $%d\n", sal);
        
        do{
            fflush(stdin);
            printf("\nDESEA INGRESAR OTRO EMPLEADO SI 'S' O  NO 'N': ");
            scanf("%c", &emp);
        }while(emp!='S' && emp!='N' && emp!='s' && emp!='n');
        
        if(emp=='S' || emp=='s'){
            do{
                printf("\nIngrese numero de empleado (0 para finalizar): ");
                scanf("%d", &num);
            }while(num<0);
        }
        else{
            num=0;
        }
    }
    if(cont > 0){
        printf("SALARIO PROMEDIO %d\n", sum/cont);
    }
    else{
        printf("NO SE INGREASARON DATOS");
    }

    return 0;
}
