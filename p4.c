# include <stdio.h>

int main(){

    int n, segundos, minutos, horas;

    printf("Digite o total de segundos:");
    scanf("%d", &n);

    horas = (n/3600);
    minutos = (n-(3600*horas))/60;
    segundos = (n-(3600*horas)-(60*minutos));

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}
