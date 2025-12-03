# include <stdio.h>

int main(){

    int x, y;

    printf("Digite as coordenadas x e y:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x == 0 && y == 0) {
        printf("ORIGEM");
    }
    else if (x == 0 && y != 0) {
        printf("EIXO Y");
    }
    else if (x != 0 && y == 0) {
        printf("EIXO X");
    }
    else if (x > 0 && y > 0) {
        printf("QUADRANTE 1");
    }
    else if (x < 0 && y < 0) {
        printf("QUADRANTE 3");
    }   
    else if (x > 0 && y < 0) {
        printf("QUADRANTE 4");
    }
    else {
        printf("QUADRANTE 2");
    }

    return 0;
}
