//4.6 Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.

#include <stdio.h>

int main()
{
    int menor, n2, n3, n4, pos=0;
    printf("Ingrese el primer numero entero\n");
    scanf("%d", &menor);
    pos=1;
    printf("Ingrese el segundo numero entero\n");
    scanf("%d", &n2);
    if(n2<menor){menor=n2;pos=2;}
    printf("Ingrese el tercer numero entero\n");
    scanf("%d", &n3);
    if(n3<menor){menor=n3;pos=3;}
    printf("Ingrese el cuarto numero entero\n");
    scanf("%d", &n4);
    if(n4<menor){menor=n4;pos=4;}
    printf("El numero menor es %d ubicado en la posicion %d\n", menor,pos);
    
    return 0;
}