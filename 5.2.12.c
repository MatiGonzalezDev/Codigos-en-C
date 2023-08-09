//5.2.12 Confeccionar un programa que permita el ingreso de 6 ternas de valores enteros.
//a. de cada terna informar el mayor valor y su orden en la terna.
//b. de cada terna informar cuantos valores son múltiplos de 7.
//c. de las 6 ternas determinar e informar el promedio de los primeros valores de cada una.

#include <stdio.h>

int main()
{
    int n1,n2,n3,ternas=0, pos=0, mlt=0, acum_n1=0, mayor;

    do{
        ternas++;
        printf("Ingrese la terna N°%d (Ej:a,b,c): ", ternas);
        scanf("%d,%d,%d", &n1,&n2,&n3);
    }while(ternas>6);
    
    int acum=0;
    while(ternas != 6){
        if(n1>=n2){
            if(n1>=n3){
                mayor=n1;
                pos=1;
            }
            else{
                mayor=n3;
                pos=3;
            }
        }
        else{
            if(n2>=n3){
                mayor=n2;
                pos=2;
            }
            else{
                mayor=n3;
                pos=3;
            }
        }
        acum+=n1;
        
        if(n1%7==0){
            mlt++;
        }
        if(n2%7==0){
            mlt++;
        }
        if(n3%7==0){
            mlt++;
        }
        printf("MAYOR VALOR: %d ", mayor);
        printf("EN LA POSICION NUMERO: %d \n", pos);
        printf("CANTIDAD DE MULTIPLOS DE 7 DE LA TERNA: %d\n", mlt);
        
        mlt=0;
        
        do{
            ternas++;
            printf("Ingrese la terna N°%d : ", ternas);
            scanf("%d,%d,%d", &n1,&n2,&n3);
        }while(ternas>6);
    }
    printf("PROMEDIO DE LOS PRIMEROS VALORES DE LAS TERNAS: %d", acum/6);

    return 0;
}