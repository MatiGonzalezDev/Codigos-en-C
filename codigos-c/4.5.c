//4.5 Se ingresan 3 números enteros. Informarlos en orden creciente.

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
    if(n1==n2 || n2==n3 || n3==n1){
        printf("No es posible ordenarlos de menor a mayor,\n Algun numero es igual a otro\n");
    }
    else{
     if(n3>n1 && n3>n2){
         if(n2>n1){printf("%d, %d, %d", n1, n2, n3);}
         else{printf("%d, %d, %d", n2, n1, n3);}
     }
     else{
         if(n2>n1 && n2>n3){
             if(n3>n1){printf("%d, %d, %d", n1, n3, n2);}
             else{printf("%d, %d, %d", n3, n1, n2);}
         }
         else{
             if(n2>n3){printf("%d, %d, %d", n3, n2, n1);}
             else{printf("%d, %d, %d", n2, n3, n1);}
         }
        }
    }
    
    return 0;
}