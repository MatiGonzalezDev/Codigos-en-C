//5.2.11 Se ingresan números enteros, hasta que se ingrese el número cero. Determinar los 2 valores mayores.

#include <stdio.h>

int main()
{
    int num, may_pri=0, may_seg=0;

    do{
        printf("Ingrese un numero (0 para finalizar): ");
        scanf("%d", &num);
    }while(num<0);
    
    while(num != 0){
        if(num > may_pri){
            may_seg=may_pri;
            may_pri=num;
        }
        else{
            if(num>may_seg){
                may_seg=num;
            }
        } 
        do{
            printf("Ingrese un numero (0 para finalizar): ");
            scanf("%d", &num);
        }while(num<0 );
    }
    printf("PRIMER VALOR MAYOR %d\n", may_pri);
    printf("SEGUNDO VALOR MAYOR %d\n", may_seg);

    return 0;
}