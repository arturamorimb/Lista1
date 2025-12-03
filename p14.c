#include <stdio.h>

int main() {
    int m, n;
    int inicio, fim;
    int soma;

    while (1) {
        
        printf("\nDigite dois valores inteiros (M N): ");

        int leitura = scanf("%d %d", &m, &n);
        
        if (leitura != 2) {
            printf("Erro na leitura ou fim da entrada. Encerrando.\n");
            break;
        }

        if (m <= 0 || n <= 0) {
            printf("Um dos valores e menor ou igual a zero. Processamento encerrado.\n");
            break;
        }

        if (m < n) {
            inicio = m;
            fim = n;
        } else {
            inicio = n;
            fim = m;
        }

        soma = 0; 
        
        printf("Sequencia: ");

        for (int i = inicio; i <= fim; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("\nSoma = %d\n", soma);
    }

    return 0;
}