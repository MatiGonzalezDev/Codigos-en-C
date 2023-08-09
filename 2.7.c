//2.7 Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.

#include <stdio.h>

int main()
{
    int n, d, c;
    printf("Ingrese un numero de tres cifras\n");
    scanf("%d", &n);
    c=n/100;
    n=n%100;
    d=n/10;
    n=n%10;
    printf("La unidad es %d\n", n);
    printf("La decena es %d\n", d*10);
    printf("La centena es %d\n", c*100);
    
    return 0;
}