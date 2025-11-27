# include <stdio.h>

int main(){

    float distancia, tempo;

    printf("Digite a distancia almejada:");
    scanf("%f", &distancia);

    tempo = (distancia/150)*60;

    printf("Tempo necessario para que a distancia seja de %.1fkm: %.1fmin", distancia, tempo);

    return 0;
}
