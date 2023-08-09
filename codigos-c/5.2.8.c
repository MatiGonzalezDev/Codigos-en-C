//5.2.8 Confeccionar un programa que me permita calcular y mostrar una cantidad de números primos que se solicita por la pantalla. Los números se calculan a partir del 2. Ejemplo: Si ingreso 6, genero los números: 2-3-5-7-11-13. El algoritmo para el cálculo de si un número es primo o no, debe estar optimizado para que si encuentra un divisor no seguir buscando ya que se sabe que no es primo.

#include <stdio.h>

int main() {
    int n, i = 2, count = 0;
    printf("Ingrese la cantidad de números primos a generar: ");
    scanf("%d", &n);
    printf("Los primeros %d números primos son:\n", n);
    while (count < n) {
        int j = 2, h = 1;
        while (j * j <= i) {
            if (i % j == 0) {
                h = 0;
                j = i; 
            }
            j++;
        }
        if (h) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\n");
    return 0;
}