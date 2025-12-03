#include <stdio.h>

int main() {
    
    int a, b, c;
    int x, y, z;
    int T;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    x = a;
    y = b;
    z = c;

    if (x > y) {
        T = x;
        x = y;
        y = T;
    }

    if (y > z) {
        T = y;
        y = z;
        z = T;
    }
    
    if (x > y) {
        T = x;
        x = y;
        y = T;
    }

    printf("Ordem Crescente:\n");
    printf("%d - %d - %d", x, y, z);

    printf("\n");

    printf("Ordem Original:\n");
    printf("%d - %d - %d", a, b, c);

    return 0;
}