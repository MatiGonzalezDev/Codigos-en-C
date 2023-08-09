//5.1.3 Se ingresan 50 números enteros. Determinar el promedio de los números pares.

#include <stdio.h>

int main()
{
    int i, num, cont=0, sum=0;
    for(i=1; i<=50; i++){
        printf("Ingrese un numero\n");
        scanf("%d", &num);
        if(num%2==0){
            cont++;
            sum+=num;
        }
    }
    if(cont==0){printf("No se ingresaron numeros pares\n");}
    else{printf("El promedio de numeros pares ingresados es %d\n", sum/cont);}

    return 0;
}