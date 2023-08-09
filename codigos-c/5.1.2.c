//5.1.2 Confeccionar un programa para calcular el valor de la siguiente suma: 100 + 95 + 90 + ... + 50.

int main()
{
    int i, sum=0;
    for(i=100; i>=50; i-=5){sum+=i;}
    printf("El total de la suma: 100 + 95 + 90 + ... + 50 es %d\n", sum);

    return 0;
}