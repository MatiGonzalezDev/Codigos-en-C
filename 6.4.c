//6.4 Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10, para ello generar una función que valide dicho ingreso. Calcular:
//a. Cuántos números son primos.
//b. Cantidad de números pares.
//c. Promedio de los números impares.
//Utilizar las siguientes funciones:
//• Resto: recibe por parámetro el Dividendo y el Divisor; Retorna el resto.
//• EsPar: recibe por parámetro un número; Retorna 1 si es Par, 0 si es Impar; Invoca a la función Resto.
//• EsPrimo: recibe por parámetro un número; Retorna 1 si es primo, 0 si no es primo; Invoca a la función Resto. (un número es primero si solo es divisible por 1 y por sí mismo).
//• Promedio: recibe por parámetro la suma y el contador; Retorna el promedio si contador > 0 sino Retorna 0.

#include <stdio.h>
#include <math.h>

int ValidarNum (int);
int Resto (int, int);
int EsPar (int);
float Promedio (int, int);
int EsPrimo(int);

int main(){
    int Num, CantPrimos=0, CantPares=0, CantImp=0, ContNumImp=0;
    do  {
        printf("Ingrese un numero mayor a 1 y menor a 50 (-10 para finalizar): ");
        scanf("%d", &Num);
    }while (ValidarNum(Num)!=1);
    while (Num != -10) {
        CantPrimos+=EsPrimo(Num);
        CantPares+=EsPar(Num);
    if(EsPar(Num)==0){
        CantImp++;
        ContNumImp+=Num;
    }
        do {
            printf("\nIngrese el siguiente numero: ");
            scanf("%d", &Num);
        }while (ValidarNum(Num)!=1);
    }
    printf("\n\nSe ingresaron %d numeros primos", CantPrimos);
    printf("\n\nSe ingresaron %d numeros pares", CantPares);
    printf("\n\nEl promedio de los numeros impares ingresados es: %.2f", Promedio(ContNumImp, CantImp));
    return 0;
}
//////////////////////funciones////////////////////////////
int ValidarNum (int x){
    if (x>1 && x<50 || x==-10){
        return 1;
    }
    else{
        return 0;
    }
}
////////////////////////////////////////////////////////////
int Resto (int x, int y)
{
return x%y;
}
////////////////////////////////////////////////////////////
int EsPar (int x){
    if (Resto(x,2) == 0){
        return 1;
    }
    else{
        return 0;
    }
}
////////////////////////////////////////////////////////////
int EsPrimo (int x){
    int i, cont=0;
    for (i=1;i<=x;i++){
        if (Resto(x,i)==0){
         cont++;
        }
    }
    if (cont == 2){
        return 1;
    }
    else{
        return 0;
    }
}
////////////////////////////////////////////////////////////
float Promedio(int x, int y){
    if (y > 0){
        return ((float)x/y);
    }
    else{
     return 0;
    }
}