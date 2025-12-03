#include <stdio.h>

int main() {

    int n; 
    int x, y; 
    
    printf("Digite a quantidade de pares de numeros a serem processados (N): ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        
        printf("\nDigite o par de numeros (X Y): ");
        scanf("%d %d", &x, &y);
        
        if (y == 0) {
            printf("divisao impossivel\n");
        } else {
            float resultado = (float)x / y;
            printf("Resultado da divisao: %.2f\n", resultado);
        }
    }
    
    return 0;
}