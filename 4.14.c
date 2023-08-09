//4.14 La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente escala:
//a. menor de $55 el descuento es del 4.5%
//b. entre $55 y $100 el descuento es del 8%
//c. más de $100 el descuento es del 10.5%
//Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con mensajes aclaratorios.

#include <stdio.h>

int main()
{
    int i;
    printf("Ingrese el importe a pagar\n");
    scanf("%d", &i);
    if(i<=0){printf("No es posible realizar la operacion");}
    else{
        if(i<55){printf("Importe: %.2f\nDescuento de 4.5 porciento", (float)i*0.955);}
        else{
            if(i>=55 && i<=100){printf("Importe: %.2f\nDescuento de 8 porciento", (float)i*0.992);}
            else{printf("Importe: %.2f\nDescuento de 10.5 porciento", (float)i*0.895);}
        }
    }
    
    return 0;
}