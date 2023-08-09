//4.16 Un negocio vende distintos artículos identificados por un código, según se muestra:
//• código 1; 10; 100: 10 pesos la unidad.
//• código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
//• código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del 10% sobre el total de la compra.
//• código 4; 44: 1 peso la unidad.
//Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se informe el importe de la compra, con las siguientes leyendas:
//ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx

#include <stdio.h>

int main()
{
    int codigo, unidades, importe, caja;
    printf("Ingrese el codigo\n");
    scanf("%d", &codigo);
    printf("Ingrese las unidades\n");
    scanf("%d", &unidades);
    if(unidades>0 && codigo==1|| codigo==10 || codigo==100 ||codigo==2 ||codigo==22 ||codigo==222 ||codigo==3 ||codigo==33 || codigo == 4 ||codigo==44){
        if(codigo == 1 || codigo==10 || codigo==100){importe = unidades * 10;}
        if(codigo == 2 ||codigo==22 || codigo==222){caja=unidades/10; unidades=unidades%10; importe = caja*65+unidades* 7;}
        if(codigo == 3 || codigo==33){
            if(unidades>10){importe=(unidades*3)*0.9;}
            else{importe=unidades*3;}
        }
        if(codigo == 4 || codigo==44){importe = unidades * 1;}
        printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $%d\n", codigo, unidades, importe);
    }
    else{printf("La compra no es aceptable");}
    
    return 0;
}