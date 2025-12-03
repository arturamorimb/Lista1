# include <stdio.h>

int main(){

    int a, b;
    int soma = 0;

    printf("Digite dois numeros inteiros:");
    scanf("%d%d", &a, &b);

    if(a < b) {
        for (int i = a; i <= b; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
    }
    else {
        for (int i = b; i <= a; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
    }

    printf("Soma: %d", soma);

    return 0;
}