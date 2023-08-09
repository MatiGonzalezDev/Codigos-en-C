//2.13 Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda calcular e informar la suma de sus dígitos hasta llegar a una sola cifra. Ej:2561 → 5.

#include <stdio.h>

int main()
{
    int n, m, c, d, u; 
    printf("Ingrese un numero de cuatro digitos mayor a cero\n");
    scanf("%d", &n);
    m=n/1000;
    n=n%1000;
    c=n/100;
    n=n%100;
    d=n/10;
    u=n%10;
    n=m+c+d+u;
    d=n/10;
    u=n%10;
    n=d+u;
    d=n/10;
    u=n%10;
    n=d+u;
    printf("La suma de sus digitos hasta llegar a una cifra es %d", n);
    
    return 0;
}