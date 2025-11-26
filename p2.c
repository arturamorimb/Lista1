# include <stdio.h>

int main(){

    int dt;
    double cg, cm;

    printf("Distancia total percorrida em km:");
    scanf("%d", &dt);

    printf("Combustivel gasto em L:");
    scanf("%lf", &cg);

    cm = dt/cg;

    printf("%.3lf km/l", cm);

    return 0;
}
