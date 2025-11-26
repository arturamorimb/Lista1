# include <stdio.h>

int main(){

    int n, hora, minuto, segundo;

    printf("Valor em segundos:");
    scanf("%d", &n);

    minuto = n/60;
    hora = minuto/60;
    segundo = n-hora*3600-minuto*60;

    printf("%d:%d:%d", hora, minuto, segundo);

    return 0;
}
