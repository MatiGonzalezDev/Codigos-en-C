//6.5 Confeccionar un programa que permita ingresar varias ternas de valores a punto flotante, que finalice al ingresar una terna con los valores ORDENADOS en forma creciente. Para cada terna exhibir la siguiente pantalla:
//** OPCIONES POSIBLES **
//1 – Mayor valor
//2 – Promedio
//3 – Suma
//4 - Finalizar
//** Digite su opción: Según la opción deseada debe aparecer en pantalla el resultado, sin borrar el menú. No admitir otros valores de opción. Confeccionar y utilizar una función PARA CADA UNA de las opciones y otra para detectar la condición final.

#include <stdio.h>
float Validar (float, float, float);
int Opciones();
float Operacion(int, float, float, float);
float MayVal (float, float, float);
float Promedio (float, float, float);
float Suma (float, float, float);

int main()
{
    int i,opcion, ban;
    float n1, n2, n3;
    printf("Ingrese el primer valor: ");
    scanf("%f", &n1);
    printf("\nIngrese el segundo valor: ");
    scanf("%f", &n2);
    printf("\nIngrese el tercer valor: ");
    scanf("%f", &n3);
    while(Validar(n1,n2,n3)!=0)
    {
        opcion=Opciones();
        while(opcion != 4){
            Operacion(opcion, n1, n2, n3);
            opcion=Opciones();
        };
        printf("Ingrese el primer valor: ");
        scanf("%f", &n1);
        printf("\nIngrese el segundo valor: ");
        scanf("%f", &n2);
        printf("\nIngrese el tercer valor: ");
        scanf("%f", &n3);
    }
}
////////////////funciones/////////////////////
float Validar (float n1, float n2, float n3){
    if (n1 < n2 && n2 < n3) return 0;
    else return 1;
}

int Opciones(){
    int opc, ban; 
    ban = 0;
     printf("\n\n** OPCIONES POSIBLES **");
     printf("\n\n1 _ Mayor valor");
     printf("\n\n2 _ Promedio");
     printf("\n\n3 _ Suma");
     printf("\n\n4 _ Finalizar");
     printf("\n\n** Digite su opcion: ");
     do {
         if (ban==1){printf("\nOpcion invalida\n\n** Digite su opcion: ");}
         ban=1;
         scanf("%d", &opc);
        }while (opc < 1 || opc > 4);
        
    return opc;
}

float Operacion(int opc, float n1, float n2, float n3){
    if(opc==1)printf("\nMayor valor: %.2f", MayVal(n1, n2, n3));
    if(opc==2)printf("\nPromedio: %.2f", Promedio(n1, n2, n3));
    if(opc==3)printf("\nSuma: %.2f", Suma(n1, n2, n3));
    
    return 0;
}

float MayVal (float n1, float n2, float n3)
{
float mayor;
if (n1 > n2)
    if (n1 > n3)
     mayor = n1;
    else
         mayor = n3;
else
     if (n2 > n3)
         mayor = n2;
     else
         mayor = n3;
return mayor;
}

float Promedio (float n1, float n2, float n3)
{
return ((n1 + n2 + n3)) / 3;
}

float Suma (float n1, float n2, float n3)
{
return (n1 + n2 + n3);
}