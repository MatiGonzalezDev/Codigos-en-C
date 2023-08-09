//5.1.10 Confeccionar un programa que solicite el ingreso de un valor entero N < 12 y luego una lista de N números reales sobre la cual debe calcular:
//a. el promedio de los positivos.
//b. el promedio de los negativos.
//c. la cantidad de ceros.
//Si el valor ingresado N es mayor que 12 informar 'VALOR EXCEDIDO” y si es menor o igual a 0 informar “CANTIDAD INVALIDA”.

#include <stdio.h>

int main()
{
    int i, n, num, sum=0, cont=0, sum2=0, cont2=0, cont3=0;
    printf("Ingrese un valor entre 1 y 12\n");
    scanf("%d", &n);
    if(n>0 && n<=12 ){
        for(i=1; i<=n; i++){
            printf("Ingrese un valor entero\n");
            scanf("%d", &num);
            if(num>0){sum+=num;cont++;}
            if(num<0){sum2+=num; cont2++;}
            if(num==0){cont3++;}
        }
        printf("PROMEDIO DE POSITIVOS %d\n", sum/cont);
        printf("PROMEDIO DE NEGATIVOS %d", sum2/cont2);
        printf("CANTIDAD DE CEROS %d\n", cont3);
    }
    else{
        if(n<=0){printf("CANTIDAD INVALIDA\n");}
        else{printf("VALOR EXCEDIDO\n");}
    }

    return 0;
}