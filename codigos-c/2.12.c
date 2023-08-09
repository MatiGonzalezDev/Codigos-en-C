//2.12 Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el precio final (0 no aplica el descuento y 1 aplica el descuento).

#include <stdio.h>

int main()
{
    int p, c, d; 
    printf("Ingrese el precio del articulo mayor a cero\n");
    scanf("%d", &p);
    printf("Ingrese el codigo (1 para aplicar descuento, 0 para no aplicar descuento)\n");
    scanf("%d", &c);
    d=p*(c*0.2);
    printf("Precio final: $%d", p-d);
    
    return 0;
}