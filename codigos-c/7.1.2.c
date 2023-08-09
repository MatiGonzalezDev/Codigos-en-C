//7.1.2 Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere un vector de 10 posiciones con el contenido de ambos vectores uno a continuación del otro.

#include <stdio.h>
#define TOTAL 5
void Cargar (int[], int);
void Generar (int[], int[], int[], int);
void Mostrar (int[], int);

int main()
{
 int V1[TOTAL], V2[TOTAL], V3[TOTAL*2];
 printf("Ingrese el primer vector: \n");
 Cargar(V1, TOTAL);
 printf("\nIngrese el segundo vector: \n");
 Cargar(V2, TOTAL);
 Mostrar(V1, TOTAL);
 printf("\n");
 Mostrar(V2, TOTAL);
 Generar(V1, V2, V3, TOTAL*2);
 printf("\nEl vector final es: \n");
 Mostrar(V3, TOTAL*2);
}
void Cargar (int v[], int ce)
{
 int i;
 for (i=0; i<ce; i++)
    {
     printf("\nElemento %d: ", i+1);
     scanf("%d", &v[i]);
    }
}

void Generar (int v1[], int v2[], int v3[], int ce)
{
 int i;
 for (i=0; i<ce; i++)
    {
     if (i < (ce / 2))
         v3[i] = v1[i];
     else
         v3[i] = v2[i-(ce/2)];
    }
}

void Mostrar (int w[], int ce)
{
 int i;
 for (i=0; i<ce; i++)
    {
     printf("%d ", w[i]);
    }
}