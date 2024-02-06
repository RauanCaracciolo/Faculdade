#include <stdio.h>
double calculaPrecoComDisconto(double a, double b);
int main (){
    double diaria, precoComDesconto;
    int porcentagem;
    printf("Digite o preco da diaria do hotel:\n ");
    scanf("%lf", &diaria);
    printf("Digite a porcentagem do desconto oferecido:\n");
    scanf("%d", &porcentagem);
    precoComDesconto = calculaPrecoComDisconto(diaria, porcentagem);
    printf("O preco final com desconto sera de: %.2lf\n", precoComDesconto);
    
}

double calculaPrecoComDisconto(double a, double b){
    double desconto = a * (b/100);
    return a - desconto;
}