//4.10 Confeccionar un programa que permita convertir grados sexagesimales a radianes y viceversa, según el valor de un código que se ingresa junto al valor. Si código = 1 se ingresan grados, si es 2 se ingresan radianes.
//1 𝑟𝑎𝑑𝑖𝑎𝑛 = 180/𝜋 𝑔𝑟𝑎𝑑𝑜𝑠
//1 𝑔𝑟𝑎𝑑𝑜 = 𝜋/180 𝑟𝑎𝑑𝑖𝑎𝑛𝑒𝑠

#include <stdio.h>

int main()
{
    int n, c;
    float PI=3.14;
    printf("Ingrese un numero mayor a cero\n");
    scanf("%d", &n);
    printf("ingrese el codigo 1 si se ingresan grados o 2 si se ingresan radianes\n");
    scanf("%d", &c);
    if(n==0 || c!=1 && c!=2){printf("No es posible realizar la operacion\n");}
    else{
        if(c==1){printf("%.2f Radianes", (float)n*PI/180);}
        else{printf("%.2f Grados", (float)n*180/PI);}
    }

    return 0;
}