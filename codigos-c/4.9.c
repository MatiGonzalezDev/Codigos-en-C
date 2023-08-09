//4.9 Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII.

#include <ctype.h>
#include <stdio.h>

int main()
{
    char letra, L; 
    printf("Ingrese una letra\n");
    scanf("%c", &letra);
    L=toupper(letra);
    if(L=='A' || L=='E' || L=='I' || L=='O' || L=='U'){printf("VOCAL %d\n", letra);}
    else{printf("No es vocal\n");}

    return 0;
}