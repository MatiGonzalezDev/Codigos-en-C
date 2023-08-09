//5.1.15 Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 3 disparos, registrándose las coordenadas X-Y de cada disparo. Determinar:
//a. Cuantos disparos se efectuaron en cada cuadrante por cada participante
//b. Cuantos disparos se efectuaron en total en el centro.
//NOTA: no considere disparos sobre los ejes.

#include <stdio.h>

int main()
{
    int i, j, x, y, centro=0, cont=0, cont2=0, cont3=0, cont4=0;
    printf("Numeros Perfectos:\n");
    for(i=1; i<=5; i++){
        cont=0, cont2=0, cont3=0, cont4=0;
        for(j=1; j<=3; j++){
            printf("Ingrese las coordenadas (x,y)\n");
            scanf("%d,%d", &x,&y);
            if(x==0 && y==0){centro++;}
            if(x>0 && y>0){cont++;}
            if(x<0 && y>0){cont2++;}
            if(x<0 && y<0){cont3++;}
            if(x>0 && y<0){cont4++;}
        }
        printf("El participante %d realizo:\n", i);
        printf("%d en el cuadrante uno\n", cont);
        printf("%d en el cuadrante dos\n", cont2);
        printf("%d en el cuadrante tres\n", cont3);
        printf("%d en el cuadrante cuatro\n", cont4);
    }
    printf("Cantidad de diparos en el centro: %d\n", centro);

    return 0;
}