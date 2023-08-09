//5.2.4 Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total y un código que indica la forma de pago. El código puede ser:
//• C: cheque, 20% de recargo.
//• E: efectivo, 10% de descuento.
//• T: con tarjeta, 12% de recargo.
//Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
//Efectivo en Caja: $ xxxx.xx
//Ventas con Tarjeta de Crédito: $ xxxx.xx
//Ventas con cheque: $ xxxx.xx
//Total de Venta: $ xxxx.xx
//Importe del IVA: $ xxxx.xx
//Nota: El IVA corresponde al 21% del total de ventas.

#include <stdio.h>

int main()
{
    int imp, c=0, e=0, t=0;
    char cod;
    printf("Ingrese el codigo");
    scanf("%c", &cod);
    fflush(stdin);
    while(cod!='F'||cod!='f'){
        printf("Ingrese el importe");
        scanf("%d", &imp);
        if(cod=='C' || cod=='c'){
            c+=imp*1.20;
        }
        if(cod=='E' || cod=='e'){
            e+=imp*0.9;
            
        }
        if(cod=='T'|| cod=='t'){
            t+=imp*1.12;
        }
        printf("Ingrese el codigo");
        scanf("%c", &cod);
        fflush(stdin);
    }
    printf("EFECTIVO EN CAAJA: %d$", e);
    printf("VENTAS CON TARJETA DE CREDITO: %d$", t);
    printf("VENTAS CON CHEQUE: %d$", c);
    printf("TOTAL DE VENTA: %d$", c+e+t);
    printf("IMPORTE DEL IVA: %.2f$", (c+e+t)*1.21);

    return 0;
}