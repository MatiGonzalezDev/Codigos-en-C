//5.1.4 Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.

#include <stdio.h>

int main()
{
    int i, cont=0, L;
    toupper L;
    for(i=1; i<=100; i++){
        printf("Ingrese una letra\n");
        scanf("%c", &L);
        if(L=='A' || L=='E' || L=='I' || L=='O' || L=='U' || L=='a' || L=='e' || L=='i' || L=='o' || L=='u'){cont++;}
    }
    
    if(cont==0){printf("No se ingresaron voces\n");}
    else{printf("La cantidad de voces ingresadas es %d\n", cont);}

    return 0;
}