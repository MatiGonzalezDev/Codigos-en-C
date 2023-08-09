//5.2.3 Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un *. Se desea obtener e informar cuantos caracteres ingresados son numéricos y cuantos alfabéticos. Estos últimos tienen que mostrarse separados por mayúsculas y minúsculas. También informar la cantidad de otros símbolos que no sean ni letras ni números.

#include <stdio.h>

int main() {
    int num=0, let_may=0, let_min=0, let=0, otros=0;
    char c;
    printf("Ingrese el caracter: ");
    scanf("%c", &c);
    fflush(stdin);
    while(c != '*'){
        if(c=='A'||c=='B'|| c=='C'||c=='D'||c=='E'||c=='F'||c=='G'||c=='H'||c=='I'||c=='J'||c=='K'||c=='L'||c=='M'||c=='N'||c=='O'||c=='P'||c=='Q'||c=='R'||c=='S'||c=='T'||c=='U'||c=='V'||c=='W'||c=='X'||c=='Y'||c=='Z'){
            let_may++;
            let++;
        }
        else{
            if(c=='a'||c=='b'||c=='c'||c=='d'||c=='f'||c=='g'||c=='h'||c=='i'||c=='j'||c=='k'||c=='l'||c=='m'||c=='n'||c=='o'||c=='p'||c=='q'||c=='r'||c=='s'||c=='t'||c=='u'||c=='v'||c=='w'||c=='x'||c=='y'||c=='z'){
                let_min++;
                let++;
            }
            else{
                if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
                    num++;
                }
                else{
                    otros++;
                }
            }
        }
    }
    printf("CANTIDAD DE NUMEROS: %d\n", num);
    printf("CANTIDAD DE LETRAS: %d\n", let);
    printf("CANTIDAD DE LETRAS MINUSCULAS: %d\n", let_min);
    printf("CANTIDAD DE LETRAS MAYUSCULAS: %d\n", let_may);
    printf("CANTIDAD DE OTROS SIMBOLOS: %d\n", otros);
    
    return 0;
}