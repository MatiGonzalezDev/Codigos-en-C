//7.1.1 Ingresar un vector de 10 unidades reales mediante una función llamada CARGA. Luego mediante una segunda función llamada INVERTIR, generar un segundo vector del mismo tamaño con los elementos ubicados en el orden inverso al del vector original. Mostrar el vector invertido con una función llamada MOSTRAR.

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

void carga(int[],int);
void invertir(int[],int[],int);
void mostrar(int[],int);

int main()
{
    int vec[5],vec2[5];
    
    carga(vec,5);
    printf("\n Veremos los valores ingresados en el primer vector: ");
    mostrar(vec,5);
    printf("\n Veremos los valores invertidos en el segundo vector: ");
    invertir(vec,vec2,5);
    mostrar(vec2,5);

    return 0;
}
///////////////Funciones///////////////
void carga(int vec[], int n){
    int i;
    //Lee los 10 numeros reales y los ubica secuencialmente en el arreglo
    for(i=1;i<=n;i++){
        printf("Ingrese un numero real: ");
        scanf("%d", &vec[i-1]);
    }
    return ;
}
void invertir(int vec[], int vec2[], int n){
    int i,j,aux;
    //Lee los 10 numeros reales y los ubica secuencialmente en el arreglo
    for(i=1;i<=n;i++){
        aux=vec[i-1];
        for(j=n-i;j==n-i;j++){
            vec2[j]=aux;
        }
    }
}
void mostrar(int vec[], int n)
{
 int i;
 for (i=1;i<=n;i++)
 printf("%d ", vec[i-1]);
}
