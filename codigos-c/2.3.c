//2.3 Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes aclaratorios la suma, el producto, el cociente y el resto.

#include <stdio.h>

int main()
{
    int n1, n2;
    float prom;
    printf("Ingrese un numero mayor a cero\n");
    scanf("%d", &n1);
    printf("Ingrese un numero mayor a cero\n\n");
    scanf("%d", &n2);
    printf("Suma: %d\n", n1+n2);
    printf("Producto: %d\n", n1*n2);
    printf("Resto: %d\n", n1%n2);
    
    return 0;
}