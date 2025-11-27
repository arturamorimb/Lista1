# include <stdio.h>

int main(){

    double pi = 3.14159, volume;
    float raio, r_cubo;

    printf("Digite o raio da esfera em cm:");
    scanf("%f", &raio);

    r_cubo = raio*raio*raio;

    volume = (4/3)*pi*r_cubo;

    printf("VOLUME = %.3lfcm³", volume);

    return 0;
}