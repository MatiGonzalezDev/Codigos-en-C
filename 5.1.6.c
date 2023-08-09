//5.1.6 Ingresar N y N Números naturales. Determinar e informar:
//a. La sumatoria de los valores múltiplos de 3.
//b. La cantidad de valores múltiplos de 5.
//c. La sumatoria de los valores que se ingresan en orden par.

#include <stdio.h>

int main()
{
    int i, n, num, sum=0, cont=0, orden=0, sum2=0;
    printf("Ingrese un numero mayor a cero\n");
    scanf("%d", &n);
    if(n>0){
        for(i=1; i<=n; i++){
            printf("ingrese un numero mayor a cero\n");
            scanf("%d", &num);
            if(num%3==0){sum+=num;}
            if(num%5==0){cont++;}
            orden++;
            if(orden%2==0){sum2+=num;}
        }
        if(sum=0 && cont==0 && sum2==0){printf("No se ingresaron valores\n");}
        else{printf("Sumatoria de multiplos de tres son %d\nCantidad de multiplos de cinco son %d\nSumatoria de numeros en orden par %d\n", sum, cont, sum2);}
    }
    else{printf("No es posible ejecutar el programa\n");}

    return 0;
}