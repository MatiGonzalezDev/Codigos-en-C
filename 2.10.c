//2.10 Confeccionar un programa que solicite el ingreso del valor del radio (r) de un círculo y con dicho valor calcule la superficie del círculo, la longitud de la circunferencia (perímetro) y el volumen de la esfera. 𝑆𝑢𝑝𝑒𝑟𝑓𝑖𝑐𝑖𝑒 = 𝜋*𝑟^2 𝑃𝑒𝑟í𝑚𝑒𝑡𝑟𝑜 = 2𝜋*𝑟 𝑉𝑜𝑙ú𝑚𝑒𝑛 =4/3𝜋*𝑟^3

#include <stdio.h>

int main()
{
    int r;
    float s, p, v, PI=3.14; 
    printf("Ingrese el radio mayor a cero\n");
    scanf("%d", &r);
    s=PI*(r*r);
    p=2*PI*r;
    v=(4/3)*PI*(r*r*r);
    printf("Un circulo con radio %d centimetros tiene como:\n", r);
    printf("Superfie %.1f centimetros\n", s);
    printf("Perimetro %.1f centimetros\n", p);
    printf("Volumen %.1f centimetros cubicos\n", v);
    
    return 0;
}