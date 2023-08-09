//2.9 Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1 y lo informe expresado en: TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)

#include <stdio.h>

int main()
{
    int Kb, Mb, Gb, Tb; 
    printf("Ingrese la la cantidad de Kilobyte mayor a cero\n");
    scanf("%d", &Kb);
    Mb=Kb/1024;
    Gb=Mb/1024;
    Tb=Gb/1024;
    printf("%d Kilobyte equivale a:\n", Kb);
    printf("%d Megabyte\n", Mb);
    printf("%d Gigabyta\n", Gb);
    printf("%d Terabyte\n", Tb);
    
    return 0;
}