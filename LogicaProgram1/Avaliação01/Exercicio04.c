#include <stdio.h>
double calculaPrestacaoEm5X(double a);
int main(){
    double valor, valorParcela;
    printf("Digite o valor do produto a ser parcelado em 5 vezes:\n");
    scanf("%lf", &valor);
    valorParcela = calculaPrestacaoEm5X(valor);
    printf("O valor de cada parcela sera: %.2lf\n", valorParcela);
}

double calculaPrestacaoEm5X(double a){
    return a/5;
}