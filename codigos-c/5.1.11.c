//5.1.11  Ingresar 18 valores de temperatura distintos de cero. Se pide determinar e informar cuantas ternas (tres valores seguidos) de valores positivos y cuantas de negativos hay

#include <stdio.h>

int main()
{
    int i, n, cont_pos=0, cont_neg=0, ter_pos=0, ter_neg=0;
    for(i=1; i<=18; i++){
        printf("Ingrese una temperatura distinta de cero\n");
        scanf("%d", &n);
        if(n>0){cont_pos++;cont_neg=0;}
        else{cont_neg++;cont_pos=0;}
        if(cont_pos>=3){ter_pos++;}
        if(cont_neg>=3){ter_neg++;}
        }
        if(ter_pos>0 && ter_neg>0){printf("CANTIDAD DE TERNAS POSTIVAS %d\nCANTIDAD DE TERNAS NEGATIVAS %d\n", ter_pos, ter_neg);}
        else{printf("NO HUBO TERNAS\n");}

    return 0;
}