//6.3 Se realizó un concurso de tiro al blanco. Por cada participante se ingresa un número que lo identifica y el resultado de los disparos efectuados. El ingreso finaliza con un número de participante negativo. Cada participante efectúa 5 disparos, registrándose las coordenadas X-Y de cada disparo. 
//• No considere disparos sobre los ejes, pero sí en el centro (si es sobre los ejes las coordenadas deberán volver a ingresarse).
//• Para determinar el cuadrante utilizar la función CUADRANTE que reciba las dos coordenadas y retorne el cuadrante al cual pertenece (1 a 4) y 0 para indicar un tiro en el centro.
//Para calcular el puntaje utilizar la función PUNTAJE que reciba 5 parámetros que representan la cantidad disparos en cada cuadrante y en el centro. La función debe retornar el puntaje obtenido según la siguiente escala:
//✓ Cuadrantes 1 y 2: 50 puntos
//✓ Cuadrantes 3 y 4: 40 puntos
//✓ Centro: 100 puntos
//Determinar:
//a. El puntaje obtenido por cada participante, detallando cuantos disparos realizó en cada cuadrante.
//b. Mostrar el número del participante ganador y el puntaje obtenido.
//c. Calcular y mostrar la cantidad total de disparos en el centro (de todos los participantes)

#include<stdio.h>
#include<math.h>


int Cuadrante (int, int);
int Puntaje (int);
int main(){
    int c_1=0, c_2=0, c_3=0, c_4=0, cent=0, puntos=0, cent_totales=0, disparos=1, num_part, cuad, i, x, y;
    printf("ingrese numero de participante: ");
    scanf("%d", &num_part);
    while(num_part>0){
        while(disparos<=5){
            printf("\nIngrese la coordenada 'X' del disparo(%d): ", disparos);
            scanf("%d", &x);
            printf("Ingrese la coordenada 'Y' del disparo(%d): ", disparos);
            scanf("%d", &y);
            cuad=Cuadrante(x, y);
            if(cuad==0){cent++; cent_totales++;}
            if(cuad==1){c_1++;}
            if(cuad==2){c_2++;}
            if(cuad==3){c_3++;}
            if(cuad==4){c_4++;}
            disparos++;
            if(cuad==5){
            disparos--;
            printf("\n\n-Disparo sobre un eje. Debe disparar nuevamente. Solo disparos en el centro pueden tocar ejes.");
            }
            puntos+= Puntaje(cuad);
        }
        
        printf("\nDisparos al cadrante uno: %d\n", c_1);
        printf("Disparos al cuadrante dos: %d\n", c_2);
        printf("Disparos al cadrante tres: %d\n", c_3);
        printf("Disparos al cadrante cuatro: %d\n", c_4);
        printf("Disparos al centro: %d\n", cent);
        printf("PUNTOS: %d\n", puntos);
        c_1=0, c_2=0, c_3=0, c_4=0, cent=0, puntos=0;
        
        printf("\nIngrese numero de participante:");
        scanf("%d", &num_part);
        disparos=1;
    }
    printf("TIROS TOTALES AL CENTRO %d\n", cent_totales);
    return 0;
}
/////////////////////////////////////funciones//////////////////////////////////////
int Cuadrante(int x, int y){
    if(x==0 && y==0)
        return 0;
    if(x>0 && y>0)
        return 1;
    if(x<0 && y>0)
        return 2;
    if(x<0 && y<0)
        return 3;
    if(x>0 && y<0)
        return 4;
    if(x==0 && y!=0 || x!=0 && y==0)
        return 5;
}
///////////////////////////////////////////////////////////////////////////////////////////
int Puntaje(int cuad){
    if(cuad==1 || cuad==2)
        return 50;
    if(cuad==3 || cuad==4)
        return 40;
    if(cuad==0)
        return 100;
    if(cuad==5)
        return 0;
}