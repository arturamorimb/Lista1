# include <stdio.h>
# include <math.h>

int main(){

    float a, b, c, delta;
    double r1, r2;

    printf("Digite os coeficientes da equação de segundo grau(a, b, c):\n");
    scanf("%f", a);
    scanf("%f", b);
    scanf("%f", c);

    delta = b * b - 4 * a * c;

    if ((a == 0) || (delta < 0)){
        printf("Impossivel calcular!");
    }

    r1 = (-b + sqrt(delta)) / 2*a;
    r2 = (-b - sqrt(delta)) / 2*a;

    return 0;
}
