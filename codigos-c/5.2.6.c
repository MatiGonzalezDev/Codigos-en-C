//5.2.6 Un negocio de perfumería efectúa descuentos en sus ventas según el importe de las mismas, con la siguiente escala:
//• menor a 50 pesos el 3.5 %
//• entre 50 y 150 pesos el 10 %
//• entre 151 y 300 pesos el 20 %.
//• mayor a 300 pesos el 25 %
//Confeccionar un programa que:
//a. Solicite un importe y calcule el descuento a efectuar y el importe neto a cobrar, con mensajes aclaratorios.
//b. Informe el importe promedio de todas las ventas realizadas. Se debe contemplar que se puedan ingresar varios importes y para finalizar se ingresa un valor negativo o cero.

#include <stdio.h>

int main()
{
    int importe, cant_ven=0, ventas=0;
    printf("Ingrese el importe (0 para finalizar ingreso): ");
    scanf("%d", &importe);
    while(importe>0){
        if(importe<50){
            importe=importe*0.965;
        }
        else{
            if(importe>=50 && importe<=150){
                importe=importe*0.9;
            }
            else{
                if(importe>=151 && importe<=300){
                    importe=importe*0.8;
                    
                }
                else{
                    importe=importe*0.75;
                }
            }
        }
        cant_ven++;
        ventas+=importe;
        printf("IMPORTE A COBRAR $ %d\n", importe);
        printf("Ingrese el importe (0 para finalizar ingreso): ");
        scanf("%d", &importe);
    }
    if(cant_ven==0){
        printf("NO HUBO VENTAS");
    }
    else{
        printf("IMPORTE PROMEDIO DE VENTAS $ %d", ventas/cant_ven);
    }

    return 0;
}