//4.1 Se ingresan 3 números distintos. Determinar el mayor.

#include <stdio.h>

int main()
{
    int mayor, n; 
    printf("Ingrese el primer numero mayor a cero\n");
    scanf("%d", &mayor);
    printf("Ingrese el segundo numero mayor a cero\n");
    scanf("%d", &n);
    if(n>mayor){
        mayor=n;
    }
    printf("Ingrese el tercer numero mayor a cero\n");
    scanf("%d", &n);
    if(n>mayor){
        mayor=n;
    }
    if(mayor<=0){
        printf("No se ingresaron numeros mayores a cero");
    }
    else{
        printf("El numero mayor es: %d", mayor);
    }
    
    return 0;
}