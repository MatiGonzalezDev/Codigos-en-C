//Ingresar 3 valores reales y:
//a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
//b. Si los tres son iguales informar “TRES IGUALES .
//c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”

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
    if(n1>n3 && n2>n3){
        printf("MAYORES AL TERCERO");
    }
    else{
        if(n1<n3 || n2<n3){
            printf("ALGUNO ES MENOR");
        }
        else{
            if(n1==n2 && n2==n3){
                printf("TRES IGUALES");
            }
            else{
                printf("NO CUMPLE CON NINGUNA CONDICION");
            }
        }
    }
    
    return 0;
}