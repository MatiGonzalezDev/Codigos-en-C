//Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos es igual a la suma de los otros dos.

#include <stdio.h>

int main()
{
    int n1, n2, n3; 
    printf("Ingrese el primer numero entero\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero entero\n");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero entero\n");
    scanf("%d", &n3);
    if(n1==0 && n2==0 && n3==0){
        printf("los numeros ingresados son ceros");
    }
    else{
        if(n1==n2+n3){
            printf("El primer numero %d igual a la suma de segundo %d y el tercero %d", n1, n2, n3);
        }
        else{
            if(n2==n1+n3){
                printf("el segundo numero %d es igual a la suma del primero %d y el tercero %d", n2, n1, n3);
            }
            else{
                if(n3==n1+n2){
                    printf("El tercer numero %d es igual a la suma del primero %d y el segundo %d", n3, n1, n2);
                }
                else{
                    printf("Ningun numero es igual a la suma de los otros dos numeros");
                }
            }
        }
    }
    return 0;
}