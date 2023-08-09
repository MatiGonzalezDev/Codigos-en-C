//5.1.19 Ingresar un número entero mayor a 0. Debe dibujar un triángulo rectángulo con * con tantas filas como el número indicado. En cada fila se va incrementando la cantidad de asteriscos. Por ejemplo, si se ingresa el número 6 debe mostrar en pantalla:
//*
//**
//***

#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("ingrese un numero mayor a cero: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}