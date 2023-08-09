//5.2.7 Ingresar diversos quintetos de números positivos de 1 cifra c/u, finalizando cuando las cinco cifras leídas sean iguales a cero. Determinar e informar cuantos de los quintetos ingresados han formado números capicúas 'triples' y cuantos 'quíntuples'.

#include <stdio.h>

int main()
{
    int pri, seg, ter, cua, qui, cifra, pos=0, cap_tri=0, cap_qui=0, quintetos=0;
    do{
        pos++;
        printf("Ingrese la cifra N°%d(la 5 cifras en 0 para finalizar): ", pos);
        scanf("%d", &cifra);
        if(pos==1){
            pri=cifra;
        }
        if(pos==2){
            seg=cifra;
        }
        if(pos==3){
            ter=cifra;
        }
        if(pos==4){
            cua=cifra;
        }
        if(pos==5){
            qui=cifra;
        }
    }while(pos!=5);
    while(pri != 0 && seg != 0 && ter != 0 && cua != 0 && qui != 0){
        if(pri==seg && seg==ter|| seg==ter && ter==cua || ter==cua && cua==qui){
            cap_tri++;
        }
        if(pri==seg && seg==ter && ter==cua && cua==qui){
            cap_qui++;
        }
        if(pos==5){
            quintetos++;
            pos=0;
        }
        
        do{
            pos++;
            printf("Ingrese la cifra N°%d(la 5 cifras en 0 para finalizar): ", pos);
            scanf("%d", &cifra);
            if(pos==1){
                pri=cifra;
            }
            if(pos==2){
                seg=cifra;
            }
            if(pos==3){
                ter=cifra;
            }
            if(pos==4){
                cua=cifra;
            }
            if(pos==5){
                qui=cifra;
            }
        }while(pos!=5);
    }
    printf("QUINTETOS:%d \nCAPICUAS TRIPLES: %d \nCAPICUAS QUINTUPLES: %d", quintetos,cap_tri,cap_qui);

    return 0;
}
