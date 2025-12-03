#include <stdio.h>

int main() {

    int hi, mi, hf, mf, total_min, horas, min;
    
    printf("Hora de inicio (0 a 23): ");
    scanf("%d", &hi);
    printf("Minuto de inicio (0 a 59): ");
    scanf("%d", &mi);

    printf("Hora de termino (0 a 23): ");
    scanf("%d", &hf);
    printf("Minuto de termino (0 a 59): ");
    scanf("%d", &mf);

    mi = (hi * 60) + mi;
    mf = (hf * 60) + mf;
    
    if (mf >= mi) {
        total_min = mf - mi;
    }
    else {
        total_min = (1440 - mi) + mf;
    }
    
    if (total_min == 0) {
        total_min = 1440; 
    }

    horas = total_min / 60;
    
    min = total_min % 60;

    printf("Duracao do jogo:\n");
    printf("\n%d hora(s) e %d minuto(s).\n", horas, min);

    return 0;
}
