//Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que los otros dos.

#include <stdio.h>

int main()
{
    int n1, n2, n3; 
    printf("Ingrese el primer numero\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero mayor el primero\n");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero mayor el primero\n");
    scanf("%d", &n3);
    if(n1<n2){
        if(n1<n3){
            printf("El primer numero, es menor que los otros dos numeros");
        }
        else{
            printf("El primer numero no es menor");
        }
    }
    else{
        printf("El primer numero no es menor");
    }
    return 0;
}