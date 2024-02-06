#include <stdio.h>

double calculaConta(double a, double b);
double calculaContaComDesconto(double a, double b);

int main(){
    double gastoEnergia, valorEnergia, valorTotal, valorDesconto;
    printf("Digite o quanto de energia sua casa gastou nesse mes em quilloWat:\n");
    scanf("%lf", &gastoEnergia);
    printf("Digite o preco do quilloWat de energia: ");
    scanf("%lf", &valorEnergia);
    valorTotal = calculaConta(gastoEnergia, valorEnergia);
    printf("Conta de energia total: R$ %.2lf\n", valorTotal);
    valorDesconto = calculaContaComDesconto(gastoEnergia, valorEnergia);
    printf("Conta de energia com desconto: R$ %.2lf\n", valorDesconto);
}

double calculaConta(double a, double b){
    return a * b;
}
double calculaContaComDesconto(double a, double b){
    return (a*b) * 0.85;
}