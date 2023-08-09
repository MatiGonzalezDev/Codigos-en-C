//5.2.1 Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean menores que 600. (1 2 4 8 16 …)

#include <stdio.h>

int main() {
    int n=1;
    
    while(n<600){
        printf("%d, ", n);
        n=n*2;
    }
    
    return 0;
}