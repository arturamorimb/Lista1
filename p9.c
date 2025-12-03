# include <stdio.h>

int main(){

    float salario, n_salario, reajuste, p;

    printf("Digite o valor do salario:");
    scanf("%f", &salario);

    if(salario < 1500){
        p = 20;
    }
    else if(salario > 5000){
        p = 10;
    }
    else{
        p = 15;
    }

    n_salario = salario * (p/100 + 1);
    reajuste = n_salario - salario;

    printf("Novo salario: %f\n", n_salario);
    printf("Valor do reajuste: %f\n", reajuste);
    printf("Percentual: %f", p);

    return 0;
}
