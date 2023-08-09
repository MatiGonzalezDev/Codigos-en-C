//4.18 Confeccionar un programa que permita ingresar la fecha actual (día, mes y año) y la fecha de nacimiento de una persona (día, mes y año). Con ambos datos debe calcular la edad de dicha persona.

#include <ctype.h>
#include <stdio.h>

int main()
{
    int d, m, a, dn, mn, an, df, mf, edad;
    printf("Ingrese la fecha actual (dia,mes,anio)\n");
    scanf("%d,%d,%d", &d,&m,&a);
    printf("Ingrese la fecha de nacimiento (dia,mes,anio)\n");
    scanf("%d,%d,%d", &dn,&mn,&an);
    df=d-dn;
    mf=m-mn;
    edad=a-an;
    if(d==0 || m==0 || a==0 || dn==0 || mn==0 || an==0){printf("No es posible calcular la edad");}
    else{
        if(mf>0){printf("La edad es de %d anios", edad);}
    else{
        if(mf==0){
            if(df<0){printf("La edad es de %d anios", edad-1);}
            else{printf("La edad es de %d anios", edad);}
        }
        else{printf("La edad es de %d anios", edad-1);}
        }
    }
    
    return 0;
}