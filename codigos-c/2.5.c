//2.5 Conociendo la cantidad de tarros de pintura que existe en un depósito de una pinturería y sabiendo que el 50% son tarros de 1Lt, el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de 1Lt., 4Lts. Y 20 Lts.

#include <stdio.h>

int main()
{
    int n, lt1, lt4;
    printf("Ingrese la cantidad de tarros mayor cero\n");
    scanf("%d", &n);
    lt1=n*0.5;
    lt4=n*0.3;
    printf("Tarros de 1 Lts %d\n", lt1);
    printf("Tarros de 4 Lts %d\n", lt4);
    printf("Tarros de 20 Lts %d\n", n-lt1-lt4);
    
    return 0;
}