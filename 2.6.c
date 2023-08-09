//2.6 El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase. Se ingresan la cantidad de pasajes vendidos de clase turista y de primera clase. Obtener la recaudación total del vuelo.

#include <stdio.h>

int main()
{
    int ct, pc, total;
    printf("Ingrese la cantidad de pasajes vendidos de clase turista mayor a cero\n");
    scanf("%d", &ct);
    printf("Ingrese la cantidad de pasajes vendidos de primera clase mayor a cero\n");
    scanf("%d", &pc);
    total=ct*8800;
    total+=pc*8800+((pc*8800)*0.3);
    printf("Recaudacion total del vuelo $%d", total);
    
    return 0;
}