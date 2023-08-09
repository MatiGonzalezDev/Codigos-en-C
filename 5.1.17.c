//5.1.17 Ingresar N artículos (códigos) y sus correspondientes precios. Indicar el código del artículo más caro y el precio del más barato. NOTA: todos los artículos tienen precios distintos.

#include <stdio.h>

int main() {
    int n, codigo, codigo_max, precio_min, precio, precio_max;
    
    printf("Ingrese la cantidad de articulos: ");
    scanf("%d", &n);
    if(n>0){
        printf("Ingrese el codigo del articulo: ");
        scanf("%d", &codigo);
        printf("Ingrese el precio del articulo: ");
        scanf("%d", &precio);
        codigo_max = codigo;
        precio_min = precio;
        precio_max = precio;
    }
    
    for (int i = 1; i < n; i++) {
        printf("Ingrese el codigo del articulo: ");
        scanf("%d", &codigo);
        printf("Ingrese el precio del articulo: ");
        scanf("%d", &precio);
        
        if (precio > precio_max) {
            codigo_max = codigo;
            precio_max = precio;
        }
        if (precio < precio_min) {
            precio_min = precio;
        }
    }
    if(n ==0){
        printf("NO SE INGREASARON ARTICULOS\n");
    }
    else{
        printf("El articulo mas caro es el %d con un precio de %d\n", codigo_max, precio_max);
        printf("El articulo mas barato tiene un precio de %d\n", precio_min);
    }
    
    return 0;
}