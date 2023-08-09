//5.1.12 Calcular el factorial de un número ingresado por teclado. El factorial se calcula como el producto de todos los enteros positivos desde 1 hasta el número. En matemática el factorial se expresa con el símbolo. Por ejemplo, el factorial de 5 es 120 ya que 5! = 1 x 2 x 3 x 4 x 5 =120

#include <stdio.h>

int main()
{
    int i, n, fact=1;
    printf("Ingrese un numero mayor a cero\n");
    scanf("%d", &n);
    if(n<0){printf("No es posible realizar el calculo");}
    else{
        if(n==0 || n==1){printf("%d! = %d", n, fact);}
        else{
            for(i=1; i<=n; i++){fact=fact*i;}
            printf("%d! = %d", n, fact);
        }
    }
    
    return 0;
}