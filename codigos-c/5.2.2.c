//5.2.2 Escribir las sentencias que permitan el ingreso correcto del valor numérico de un día y un mes determinado. Por algún error volver a solicitar.

#include <stdio.h>

int main() {
    int d, m, flag=1;
    
    do{
        printf("Ingrese el dia: ");
        scanf("%d", &d);
        printf("Ingrese el mes: ");
        scanf("%d", &m);
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 && d>0 && d<32){
            flag--;
        }
        else{
            if(m==4 || m==6 || m==9 || m==11 && d>0 && d<31){
                flag--;
            }
            else{
                if(m==2 && d>1 && d<30){
                    flag--;
                }
                else{
                    printf("Mes y dia incorrecto, ingrese otra vez\n");
                }
            }
        }
    }while(flag != 0);
    printf("El dia y mes ingresados son correctos");
    
    return 0;
}