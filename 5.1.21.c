//5.1.21 Tomando como base el ejercicio anterior ingresar un número entero mayor a 0 y dibujar un rombo con *. Por ejemplo, si se ingresa el número 5 dibuja la pirámide de 5 filas y luego completa el rombo al ir decrementando la cantidad de asteriscos.
//  *
// ***
//*****
// ***
//  *

#include <stdio.h>

int main() {
    int n, i, j, k, h=1;
    
    printf("ingrese un numero mayor a cero: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= h; j++){
            printf("*");
        }
        printf("\n");
        h+=2;
    }
    h-=2;
    for (int i = 1; i <= n-1; i++) {
        for(int j = 1; j <= i; j++){
            printf(" ");
        }
        h-=2;
        for(int j = 1; j <= h; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}