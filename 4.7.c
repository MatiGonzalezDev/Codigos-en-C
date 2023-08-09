//4.7 Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine e informe si forman o no triángulo. Para ello utilizar el teorema de la desigualdad del triángulo que establece que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del tercer lado.

#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Ingrese el primer numero mayor a cero\n");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero mayor a cero\n");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero mayor a cero\n");
    scanf("%d", &n3);
    if(n1>0 && n2>0 && n3>0 && n1<=n2+n3 && n2<=n1+n3 && n3<=n1+n2){printf("Es triangulo\n");}
    else{printf("No es triangulo\n");}
    
    return 0;
}