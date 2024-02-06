#include <stdio.h>
double calculaMinimoDeIngresso (double a, double b);
int main(){
    double custoEspetaculo, precoIngresso;
    printf("Digite o custo para realizar o espetaculo: ");
    scanf("%lf", &custoEspetaculo);
    printf("Digite o preco de um ingresso para o espetaculo: ");
    scanf("%lf", &precoIngresso);
    double min = calculaMinimoDeIngresso(custoEspetaculo, precoIngresso);
    printf("Será necessario vender no minimo %.2lf ingressos para que o preco do espetaculo seja pago.\n", min);
}

double calculaMinimoDeIngresso(double a, double b){   
    return a/b;
}