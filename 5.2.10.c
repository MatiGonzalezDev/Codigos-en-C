//5.2.10 En un proceso de control se evalúan valores de temperatura, finalizando cuando de ingresa un valor ficticio de temperatura -50. Determinar el valor máximo y mínimo medido y sus posiciones respecto al ingreso.

#include <stdio.h>

int main()
{
    int temp, pos_max, pos_min, temp_max=0, temp_min=0, pos=0;

    do{
        printf("Ingrese la temperatura(-50 para finalizar): ");
        scanf("%d", &temp);
    }while(temp<-4 && temp>32 && temp != -50);
    while(temp!=-50){
        pos++;
        if(temp_min==0 && temp_max==0){
            temp_max=temp;
            pos_max=pos;
            temp_min=temp;
            pos_min=pos;
        }
        else{
            if(temp>temp_max){
                temp_max=temp;
                pos_max=pos;
            }
            else{
                if(temp<temp_min){
                    temp_min=temp;
                    pos_min=pos;
                }
            }
        }
        do{
            printf("Ingrese la temperatura(-50 para finalizar): ");
            scanf("%d", &temp);
        }while(temp<-4 && temp>32 && temp != -50);
    }
    if(pos > 0){
        printf("TEMPERATURA MAXIMA: %d\n",temp_max);
        printf("POSICION: %d\n", pos_max);
        printf("TEMPERATURA MINIMA: %d\n", temp_min);
        printf("POSICION: %d\n", pos_min);
    }
    else{
        printf("NO HUBO INGRESOS DE TEMPERATURAS");
    }

    return 0;
}