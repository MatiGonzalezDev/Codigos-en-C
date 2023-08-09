//4.8 Realizar un programa que ingrese dos números e indique si el primer número es divisible por el segundo.

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Ingrese el primer numero mayor a cero\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero mayor a cero\n");
    scanf("%d", &n2);
    if(n1==0 || n2==0 || n1%n2>0){printf("El primero no es divisible por el segundo\n");}
    else{printf("El primero es divisible por el segundo\n");}
    
    return 0;
}