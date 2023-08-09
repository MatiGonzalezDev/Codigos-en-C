//5.1.14 Confeccionar un programa que determine e informe los números perfectos comprendidos entre 1 y 9000. Un número es perfecto cuando es igual a la suma de sus divisores positivos menores que él.

#include <stdio.h>

int main()
{
    int i, j, cont=0, sum=0;
    printf("Numeros Perfectos:\n");
    for(i=2; i<=9000; i++){
        sum=0;
        for(j=1; j<i; j++){
            if(i%j==0){sum+=j;}
        }
        if(sum==i){
            printf(" %d,", i);
            cont++;
        }
    }
    printf("\nLa cantidad de numeros perfectos encontrados es %d", cont);

    return 0;
}