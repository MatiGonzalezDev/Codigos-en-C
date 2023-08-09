//5.1.5 Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo solicita por teclado el programa.

#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Ingrese un numero mayor a cero\n");
    scanf("%d", &n);
    if(n>0){
        for(i=1; i<=n; i++){sum+=i;}
        printf("La suma de los primeros %d numeros naturales, es igual a %d\n", n, sum);
    }
    else{printf("No es posible realizar la suma\n");}

    return 0;
}