//2.8 Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un número con formato (aammdd).

int main()
{
    int n, dd, mm;
    printf("Ingrese una fecha formato ddmmaa\n");
    scanf("%d", &n);
    dd=n/10000;
    n=n%10000;
    mm=n/100;
    n=n%100;
    printf("Nueva fecha %d\n", (n*10000)+(mm*100)+dd);
    
    return 0;
}