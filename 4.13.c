//4.13 Un fabricante de repuestos para tractores ha descubierto que ciertos artículos identificados por los números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos. Se desea confeccionar un programa al que informándole el número de catálogo indique si el artículo es o no defectuoso. Los artículos del catálogo van desde el 1200 al 90000. Si se ingresa otro número informar “FUERA DE CATALOGO”.

#include <stdio.h>

int main()
{
    int n;
    printf("Ingrese un numero de catalogo entre 1200 y 90000\n");
    scanf("%d", &n);
    if(n<1200 || n>90000){printf("FUERA DE CATALOGO\n");}
    else{
        if(n>=12121 && n<=18081 || n>=30012 && n<=45565 || n>=67000 && n<=68000){printf("ARTICULO DEFECTUOSO\n");}
        else{printf("ARTICULO EN BUEN ESTADO\n");}
    }
    
    return 0;
}