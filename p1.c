# include <stdio.h>

int main(){

    float a, b, media;

    printf("Valor de a:");
    scanf("%f", &a);

    printf("Valor de b:");
    scanf("%f", &b);

    media = ((a * 3.5) + (b * 7.5)) / 11;

    printf("MEDIA = %.5f", media);

    return 0;
}
