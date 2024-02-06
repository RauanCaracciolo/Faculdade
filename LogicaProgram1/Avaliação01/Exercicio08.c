#include <stdio.h>
double calculaQuantosDegraus(double a, double b);
int main (){
    double degrau, altura, quantosDegraus;
    printf("Digite a altura dos degraus em M:\n");
    scanf("%lf", &degrau);
    printf("Digite a altura que deseja subir em M:\n");
    scanf("%lf", &altura);
    quantosDegraus = calculaQuantosDegraus(degrau, altura);
    printf("Devera subir %.2lf Degraus", quantosDegraus);
}

double calculaQuantosDegraus(double a, double b){
    return b/a;
}