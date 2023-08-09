//5.1.20 Ingresar un número entero mayor a 0. Debe dibujar una pirámide con * con tantas filas como el número indicado. En cada fila se va incrementando la cantidad de asteriscos de 2 en 2.
//Por ejemplo, si se ingresa el número 5 debe mostrar en pantalla:
//  *
// ***
//*****

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
    
    return 0;
}