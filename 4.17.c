//4.17 Confeccionar un programa que pueda determinar el importe a pagar por una prestación médica según su código. Los importes se cobran según la siguiente tabla:
//codigo | importe
//   A   |   20 
//   D   |   40
//   F   |   60
//   M   |  150
//   T   |  150
//Se debe ingresar el número de historia del paciente y el código de la prestación. Se debe emitir un ticket con el número de la historia, el código y el importe a pagar.

#include <ctype.h>
#include <stdio.h>

int main()
{
    int num, importe;
    char codigo, cod;
    printf("Ingrese el codigo de prestacion\n");
    scanf("%c", &cod);
    printf("Ingrese el numero de historia mayor a cero\n");
    scanf("%d", &num);
    codigo=toupper(cod);
    if(num>0 && codigo=='A' || codigo=='D' || codigo=='F' || codigo=='M' || codigo=='T'){
        switch(codigo){
            case 'A':
            importe=20;
            break;
            case 'D':
            importe=40;
            break;
            case 'F':
            importe=60;
            break;
            case 'M':
            importe=150;
            break;
            case 'T':
            importe=150;
            break;
        }
        printf("NUMERO DE HISTORIA %d\nCODIGO %c\nIMPORTE A PAGAR $%d", num, codigo, importe);
    }
    else{printf("No es posible el registro");}
    
    return 0;
}