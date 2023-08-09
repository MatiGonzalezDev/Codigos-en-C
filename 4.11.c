//Escribir un programa que solicite el año y el número de mes y nos informe cuantos días tiene dicho mes. Debemos considerar que el año puede ser bisiesto. Un año es bisiesto cuando es divisible por 4 y no por 100 o el año es divisible por 400.

#include <stdio.h>

int main()
{
    int anio, mes, b;
    printf("Ingrese un anio\n");
    scanf("%d", &anio);
    printf("ingrese el mes\n");
    scanf("%d", &mes);
    if(mes>=1 && mes<=12 && anio/1000>0){
        b=anio%4;
        printf("En el anio %d el mes de %c", anio, mes);
        switch(mes){
            case 1:
            printf("Enero tiene 31 dias");
            break;
            case 2:
            if(b==0){printf("Febrero tiene 29 dias");}
            else{printf("Febrero tiene 28 dias");}
            break;
            case 3:
            printf("Marzo tiene 31 dias");
            break;
            case 4:
            printf("abril tiene 30 dias");
            break;
            case 5:
            printf("Mayo tiene 31 dias");
            break;
            case 6:
            printf("Junio tiene 30 dias");
            break;
            case 7:
            printf("Julio tiene 31 dias");
            break;
            case 8:
            printf("Agosto tiene 31 dias");
            break;
            case 9:
            printf("Septiembre tiene 30 dias");
            break;
            case 10:
            printf("Octubre tiene 31 dias");
            break;
            case 11:
            printf("Noviembre tiene 30 dias");
            break;
            case 12:
            printf("Diciembre tiene 31 dias");
            break;
        }
    }
    else{printf("No es posible realizar la operacion, algun valor es incorrecto");}

    return 0;
}