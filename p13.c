#include <stdio.h>

int main() {
    
    int n, p, maior = 0; 
    
    for (int i = 1; i <= 10; i++) {
        
        printf("Digite o %d.o valor: ", i); 
        scanf("%d", &n); 
        
        if (n > maior) {
            maior = n;
            p = i;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Posicao: %d", p);
    
    return 0;
}