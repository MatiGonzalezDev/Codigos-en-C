//5.1.13 Realizar un programa que:
//a. Muestre todos los números primos entre 1 y 100. (Un nro. es primo cuando es divisible solamente por 1 y por sí mismo)
//b. Contar y mostrar la cantidad de primos encontrados

#include <stdio.h>

int main()
{
    int i, j, cont=0, divi=0;
    printf("Numeros Primos:\n");
    for(i=2; i<=100; i++){
        divi=0;
        for(j=2; j<i; j++){
            if(i%j==0){divi++;}
        }
        if(divi==0){
            printf(" %d,", i);
            cont++;
        }
    }
    printf("\nLa cantidad de numeros primos encontrados es de %d", cont);

    return 0;
}