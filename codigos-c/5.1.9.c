//5.1.9 Confeccionar un programa que exhiba por pantalla una lista, a dos columnas, con los primeros 15 números impares en la primera y los 15 primeros pares en la segunda, incluyendo los títulos. 

#include <stdio.h>

int main()
{
    int i, acum, acum2;
    printf("N°imp N°par\n");
    for(i=1; i<=15; i++){
        acum2+=2;
        acum++;
        if(acum%2==0){acum++;}
        if(acum/10>=1){printf(" %d", acum);}
        else{printf("  %d", acum);}
        if(acum2/10>=1){printf("      %d\n", acum2);}
        else{printf("       %d\n", acum2);}
        }

    return 0;
}