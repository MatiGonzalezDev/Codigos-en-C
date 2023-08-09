//2.4 Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms. y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.

#include <stdio.h>

int main()
{
    int n, pulg;
    float ctm;
    printf("Ingrese la cantidad de pies mayor a cero\n");
    scanf("%d", &n);
    pulg=n*12;
    ctm=(float)pulg*2.54;
    printf("%d pies, equivale a:\n", n);
    printf("%d Yardas\n", n/3);
    printf("%d Pulgadas\n", pulg);
    printf("%.0f Centimetros\n", ctm);
    printf("%.1f Metros\n", ctm*0.01);
    
    return 0;
}