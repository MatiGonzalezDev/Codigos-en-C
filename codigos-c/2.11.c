//2.11 Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las adicionales se cobran como por unidad. Indicar el precio total a abonar.

#include <stdio.h>

int main()
{
    int e,u,d; 
    printf("Ingrese la cantidad de empanadas mayor a cero\n");
    scanf("%d", &e);
    d=e/12;
    u=e%12;
    printf("Total a pagar: $%d", d*300+u*30);
    
    return 0;
}