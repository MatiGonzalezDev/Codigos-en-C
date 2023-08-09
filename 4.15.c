//4.15 Un negocio de artículos de computación vende DVDs según la siguiente escala de precios:
//• sueltos, entre 1 y 9 a $15 c/u.
//• la caja de 10 cuesta $120.
//• la caja de 50 cuesta $500.
//Si la compra excede las 100 unidades se efectúa un descuento del 10%.
//NOTA: se aceptan compras entre 1 y 500 DVDs.
//Se pide que se ingrese una cantidad de DVDs que se quiere comprar y calcule e informe el importe a pagar.

#include <stdio.h>

int main()
{
    int dvd, sueltos, c_10, c_50, importe;
    printf("Ingrese la cantidad de dvd mayor a cero y menor o igual 500\n");
    scanf("%d", &dvd);
    if(dvd>0 && dvd<=500){
        c_50=dvd/50;
        sueltos=dvd%50;
        c_10=sueltos/10;
        sueltos=sueltos%10;
        importe=c_50*500+c_10*120+sueltos*15;
        if(dvd>100){importe*=0.9;}
        printf("El importe a pagar es de: $%d\n", importe);
    }
    else{printf("La compra no es aceptable");}
    
    return 0;
}